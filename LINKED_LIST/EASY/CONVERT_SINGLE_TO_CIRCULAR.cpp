/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node* next;
};

void convertToCircularList(Node* head) {
    if (head == nullptr)
        return;

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = head;  
}

int main() {
    // Creating singly linked list
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};
    Node* fourth = new Node{4, nullptr};

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Convert the singly linked list to a circular linked list
    convertToCircularList(head);

    // Accessing the circular linked list
    Node* current = head;
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);
    return 0;
}
