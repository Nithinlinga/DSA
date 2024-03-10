#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<vector<int>> tree;
    cout<<"enter no of edges";
    int n;
    cin>>n;
    for(int i=0 ;i < n;++i){
        int a,b;
        cin>>a>>b;
        tree[b].push_back(a);
    }
    for(auto &a: tree){
        for(auto &b: tree){
            
        }
    }
    
}