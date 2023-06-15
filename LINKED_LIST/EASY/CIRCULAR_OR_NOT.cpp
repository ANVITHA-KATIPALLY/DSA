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

bool isCircularLinkedList(Node* head) {
    if (head == nullptr)
        return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main() {
    // Create a circular linked list
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};
    Node* fourth = new Node{4, nullptr};

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;  // Circular reference

    bool isCircular = isCircularLinkedList(head);
    if (isCircular)
        std::cout << "The linked list is circular." << std::endl;
    else
        std::cout << "The linked list is not circular." << std::endl;

    // Clean up memory (not shown in the example)

    return 0;
}
