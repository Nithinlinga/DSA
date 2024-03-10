#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,1,2,4,4};
    int n=8;
    // int hash[13]={0};
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){

        
        hash[arr[i]]++;
        
        }
        for(auto i: hash){
            cout<<i.first<<" "<<i.second<<"\n";
        }
    // int q;
    // cin>>q;
    // int number;
    // while(q--){
        
    //     // cin>>number;
    //     cout<<"number of times "<<number <<"appeared is-  "<<hash[number]<<endl;
    // }
}