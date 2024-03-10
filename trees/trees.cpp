#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insert(node* root,int val){
    node* newNode=new node(val);
    if(root==NULL){
        root=newNode;
        return root;
    }
    // node* temp=root;
    // while(temp->left!=NULL){
    //     temp=temp->left;
    // }
    // temp->left=newNode;
    if(val>root->data){
        root->right=insert(root->right,val);

    }
}
void display(node* root){
    // node* temp=root;
    if(root==NULL)
    return;
    cout<<root->data<<"->";
    display(root->left);
    display(root->right);
}

int maxSum(node* root,int maxi){
    if(root==NULL)
    return 0;

    int leftSum=max(0,maxSum(root->left,maxi));
    int rightSum=max(0,maxSum(root->right,maxi));
    maxi=max(maxi,leftSum+rightSum);
    return (root->data)+max(leftSum,rightSum);

}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);

}
int main(){
    node* head=new node(5);
    node* first=new node(3);
    node* second=new node(6);
    node* th=new node(7);
    node* ff=new node(8);
    node* six=new node(2);
    node* seven=new node(4);
    head->left=first;
    head->right=second;
    first->left=th;
    first->right=six;
    second->left=seven;
    display(head);
    cout<<"NULL"<<endl;
    inorder(head);

    cout<<endl<<maxSum(head,0);
    

}