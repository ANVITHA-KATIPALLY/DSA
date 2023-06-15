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

void reverseDoublyLinkedList(Node** head) {
    if (*head == nullptr || (*head)->next == nullptr)
        return;

    Node* current = *head;
    Node* temp = nullptr;

    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != nullptr)
        *head = temp->prev;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a doubly linked list
    Node* head = new Node{1, nullptr, nullptr};
    Node* second = new Node{2, nullptr, nullptr};
    Node* third = new Node{3, nullptr, nullptr};
    Node* fourth = new Node{4, nullptr, nullptr};

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    // Print the original linked list
    std::cout << "Original linked list: ";
    printLinkedList(head);

    // Reverse the doubly linked list
    reverseDoublyLinkedList(&head);

    // Print the reversed linked list
    std::cout << "Reversed linked list: ";
    printLinkedList(head);

    // Clean up memory (not shown in the example)

    return 0;
}

