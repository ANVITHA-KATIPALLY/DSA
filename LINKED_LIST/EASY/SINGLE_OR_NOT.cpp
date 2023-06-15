/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

struct Node {
    int data;
    Node* next;
};

bool isSinglyLinkedList(Node* head) {
    while (head != nullptr) {
        if (head->next != nullptr && head->next->next == head)
            return false;

        head = head->next;
    }

    return true;
}

int main() {
    //creating a single linked list
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    head->next = second;
    second->next = third;

    bool isSinglyLinked = isSinglyLinkedList(head);
    if (isSinglyLinked)
        std::cout << "The linked list is a singly linked list." << std::endl;
    else
        std::cout << "The linked list is not a singly linked list." << std::endl;
}