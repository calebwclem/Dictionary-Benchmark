#include "SortedLinkedListDict.hpp"
void SortedLinkedListDict::insert(const int key) {
    Node* newNode = new Node(key);

    //No head? The new node is the head!
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* curr = head;
        while(curr->next != nullptr) {
            if (curr->data <= key && curr->next->data >= key) {
                newNode->next = curr->next;
                curr->next = newNode;
                break;
            }
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

bool SortedLinkedListDict::lookup(const int key) const {

    Node* trav = head;
    while (trav->data != key && trav->next != nullptr)
        trav = trav->next;

    if (trav->data == key)
        return true;

    return false;
}
void SortedLinkedListDict::remove(const int key) {

    Node* trav = head;

    //If desired element is the head
    if (trav->data == key) {
        head = trav->next;
        delete trav;
    }

    //Any other outcome
    else {
        //Iterate trav to the element right before desired node
        while (trav->next->data != key) {
            trav = trav->next;
        }
        Node* temp = trav->next;
        trav->next = temp->next;
        delete temp;
    }
}