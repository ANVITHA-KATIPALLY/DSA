/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
          int data;
          Node * next;
};
void pushNode(Node**head_ref,int data_val){
    Node* new_node = new Node();
    new_node->data = data_val;          //put data
    new_node->next = (*head_ref);       //link to list
    (*head_ref) = new_node;             //moving to next node
}
int count(Node* head,int key){
    Node* current = head;
    int count=0;
    while(current != NULL){
        if(current->data == key)
            count++;
            current = current->next;
    }
    return count;
}
int main(){
    Node* head = NULL;
    pushNode(&head,1);
    pushNode(&head,8);
    pushNode(&head,1);
    pushNode(&head,1);
    pushNode(&head,1);
    cout<<count(head,1);
    return 0;
}
