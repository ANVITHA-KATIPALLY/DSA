/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

bool isDoublyLinkedList(Node* head) {
    while (head != nullptr) {
        if (head->prev == nullptr || head->next == nullptr)
            return false;

        head = head->next;
    }

    return true;
}

int main() {
    // Create a doubly linked list
    Node* head = new Node{1, nullptr, nullptr};
    Node* second = new Node{2, nullptr, nullptr};
    Node* third = new Node{3, nullptr, nullptr};

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    bool isDoublyLinked = isDoublyLinkedList(head);
    if (isDoublyLinked)
        std::cout << "The linked list is a doubly linked list." << std::endl;
    else
        std::cout << "The linked list is not a doubly linked list." << std::endl;
    return 0;
}
