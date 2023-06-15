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

void deleteNode(Node** head, Node** tail, Node* nodeToDelete) {
    if (*head == nullptr || nodeToDelete == nullptr)
        return;

    // Case 1: Node to delete is the head node
    if (*head == nodeToDelete)
        *head = nodeToDelete->next;

    // Case 2: Node to delete is the tail node
    if (*tail == nodeToDelete)
        *tail = nodeToDelete->prev;

    // Case 3: Node to delete is in the middle of the list
    if (nodeToDelete->prev != nullptr)
        nodeToDelete->prev->next = nodeToDelete->next;

    if (nodeToDelete->next != nullptr)
        nodeToDelete->next->prev = nodeToDelete->prev;

    delete nodeToDelete;
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

    // Delete the node with data 2
    deleteNode(&head, &fourth, second);

    // Print the modified linked list
    std::cout << "Modified linked list: ";
    printLinkedList(head);

    // Clean up memory (not shown in the example)

    return 0;
}

