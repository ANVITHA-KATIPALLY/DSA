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

void traverseCircularList(Node* head) {
    if (head == nullptr)
        return;

    Node* current = head;

    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);

    std::cout << std::endl;
}

int main() {
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};
    Node* fourth = new Node{4, nullptr};

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;  // Circular reference
    traverseCircularList(head);

    return 0;
}
