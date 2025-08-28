#include "SortedVectorDict.hpp"
/*void SortedVectorDict::insert(int key) {

    //If element is already in array
    if (binSearch(key) != -1) {
        for (int i = binSearch(key); i < data.size() - 1; ++i) {
            data[i] = data[i + 1];
        }
    }
    //If element is not in array
    else {
        int i = 0;
        while (data[i+1] < key)
            i++;

        for (int j = data.size() - 1; j > i+1; j--) {
            data[j + 1] = data[j];
        }
        data[i+1] = key;
    }
}*/

void SortedVectorDict::insert(int key) {
    // Step 1: Find position to insert the key
    int pos = 0;
    while (pos < data.size() && data[pos] < key) {
        ++pos;
    }

    // Step 2: Make space by adding a dummy element to increase size
    data.push_back(0); // Add a placeholder to expand vector

    // Step 3: Shift elements one position to the right starting from the end
    for (int i = data.size() - 1; i > pos; --i) {
        data[i] = data[i - 1];
    }

    // Step 4: Insert the key at the correct position
    data[pos] = key;
}


bool SortedVectorDict::lookup(const int key) const {

    if (binSearch(key) != -1)
        return true;

    return false;
}

void SortedVectorDict::remove(const int key) {

    //Check if element is in list, if so, adjust array as needed
    if (binSearch(key) != -1) {
        for (int i = binSearch(key); i < data.size() - 2; i++) {
            data[i] = data[i + 1];
        }
    }
}

//Standard Aux Binary Search function for lookup and insert to use
// returns the index of the key being looked up and -1
//     the element was not found
int SortedVectorDict::binSearch(const int key) const {

    int front = 0;
    int back = data.size() - 1;

    while (front <= back) {
        int mid = front + (back - front) / 2;

        if (data[mid] == key)
            return mid;

        if (data[mid] < key)
            front = mid + 1;
        else
            back = mid - 1;
    }
    return -1;
}