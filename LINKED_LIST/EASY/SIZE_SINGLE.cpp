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

int findLinkedListSize(Node* head) {
    int size = 0;
    Node* current = head;

    while (current != nullptr) {
        size++;
        current = current->next;
    }

    return size;
}

int main() {
    // Create a singly linked list
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};
    Node* fourth = new Node{4, nullptr};

    head->next = second;
    second->next = third;
    third->next = fourth;

    int size = findLinkedListSize(head);
    std::cout << "Size of the linked list: " << size << std::endl;


    return 0;
}
