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
class Solution{
    public:
    vector<vector<int>> levelorder(node* root){
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<node*> q;
        q.push(root);
        while (!q.empty())
        {
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                node* newnode=q.front();
                q.pop();
                if(newnode->left) 
                q.push(newnode->left);
                if(newnode->right)
                q.push(newnode->right);


            level.push_back(newnode->data);
            }
            ans.push_back(level);
        }
        return ans;

        
    }
};
int main(){
    node* head=new node(10);
    node* node1=new node(9);
    node* node2=new node(11);
    node* node3=new node(14);
    node* node4=new node(1);
    head->left=node1;
    head->right=node2;
    node1->left=node4;
    node2->left=node3;
    Solution obj;

    vector<vector<int>> abc=obj.levelorder(head);
    for(int i=0;i<abc.size();i++){
        for(int j=0;j<abc[i].size();j++){
            cout<<abc[i][j]<<"->";
        }
    }
}