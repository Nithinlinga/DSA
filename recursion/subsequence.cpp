#include<bits/stdc++.h>
using namespace std;
void subseq(int ind,int arr[],int n,vector<int> &vec){
    if(ind>=n){
        for(auto it: vec){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    vec.push_back(arr[ind]);
    subseq(ind+1,arr,n,vec);
    vec.pop_back();
    subseq(ind+1,arr,n,vec);

    
}
int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int> vec;
    subseq(0,arr,n,vec);

}