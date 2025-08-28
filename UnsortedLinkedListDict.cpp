#include "UnsortedLinkedListDict.hpp"

#include <__iterator/next.h>

void UnsortedLinkedListDict::insert(const int key) {

    //INITIALLY I THOUGHT WE NEEDED TO APPEND TO END OF LL
    /*Node* newNode = new Node(key);
    //No head? The new node is the head!
    if (head == nullptr) {
        head = newNode;
    }
    else {
        //Iterate to end
        Node* curr = head;
        while (curr->next!= nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }*/

    Node* newNode = new Node(key);
    newNode->next = head;
    head = newNode;
}


bool UnsortedLinkedListDict::lookup(int key) const {
    Node* curr = head;
    while (curr != nullptr) {
        if (curr->data == key)
            return true;
        curr = curr->next;
    }
    return false;
}

void UnsortedLinkedListDict::remove(int key) {
    if(head->data == key)
        head = head->next;
    else {
        Node* trav = head;

        //Iterate to element just before the desired removed element
        while (trav->next->data != key && trav->next != nullptr)
            trav = trav->next;

        //Assign temp var for deletion
        Node* temp = trav->next;

        //Point to the element after the desired removed element
        trav->next = trav->next->next;

        //Deallocate memory of removed variable
        delete temp;
    }

}