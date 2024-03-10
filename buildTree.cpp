#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }

};

node* buildTree(node* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    return NULL;

    cout<<"Enter data for inserting at left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting at right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}


int main(){
    node* root=NULL;
    root=buildTree(root);
    levelOrder(root);
}