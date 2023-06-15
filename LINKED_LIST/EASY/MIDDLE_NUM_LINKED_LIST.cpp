/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
           int data;
           Node * next;
};
class NodeOperator{
    public:
          void pushNode(class Node** head_ref,int data_val){ //to add new node
              class Node *new_node = new Node();            //allocate Node
              new_node->data = data_val;                    //put data
              new_node->next = *head_ref;                   //link old list
              *head_ref = new_node;                         //move to next node
          }
};
int main(){
    class Node *head=NULL;
    class NodeOperator *temp = new NodeOperator();  
    for(int i=7; i>0; i--){
        temp->pushNode(&head, i);
    }
    vector<int>v;
    while(head!=NULL){
     v.push_back(head->data);
     head=head->next;
    }
    
    cout<<"Middle Value Of Linked List is :";
    cout<<v[v.size()/2]<<endl;
    return 0;
}
