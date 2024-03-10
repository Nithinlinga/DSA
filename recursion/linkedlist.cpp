// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node
class Node {
   public:
  int val;
  Node* next;
};
void showduplicates(Node* head){
        Node* dummy=head;
        Node* prev=dummy;
        while(head!=NULL){
            if(head->next!=NULL && head->val==head->next->val){
                while(head->next!=NULL && head->val==head->next->val)
                    head=head->next;
                    cout<<head->val;
                
                prev->next=head->next;
            }
            else
                prev=prev->next;
            
                head=head->next;
        }
     
    }

int main() {
  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;
  Node* four = NULL;
  Node* five = NULL;

  // allocate 3 nodes in the heap
  one = new Node();
  two = new Node();
  three = new Node();
  
  four = new Node();
  five = new Node();

  // Assign value values
  one->val = 1;
  two->val = 2;
  three->val = 2;
  four->val = 3;
  five->val = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = four;
  four->next=five;
  five->next=NULL;

  // print the linked list value
  head = one;
  showduplicates(head);
//   while (head != NULL) {
//     cout << head->val;
//     head = head->next;
//   }
}