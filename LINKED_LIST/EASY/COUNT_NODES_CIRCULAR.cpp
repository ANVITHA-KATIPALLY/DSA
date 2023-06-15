/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

int countCircular(struct Node * head){
    if(head==NULL)
        return 0;
    Node * current = head;
    int count=0;
    do{
        count++;
        current = current->next;
    }
    while(current != head);
    return count;
}
int main(){
    Node* head = new Node{1,NULL};
    Node* second = new Node{2,NULL};
    Node* third = new Node{3,NULL};
    Node* fourth = new Node{4,NULL};
    Node* five = new Node{5,NULL};
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    five->next = head;
    
    int count_cir = countCircular(head);
    cout<<count_cir;
    return 0;
    
}