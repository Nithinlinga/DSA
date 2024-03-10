#include<bits/stdc++.h>
using namespace std;
void sumkSubseq(int ind,int arr[],int n,vector<int> &vec,int sum,int fsum){
    if(ind==n){
        if(fsum==sum){
            for(auto it: vec){
                cout<<it<<" ";
            }
            cout<<endl;
        return;
        }
    }
    vec.push_back(arr[ind]);
    fsum+=arr[ind];
    sumkSubseq(ind+1,arr,n,vec,sum,fsum);
    fsum-=arr[ind];
    vec.pop_back();
    sumkSubseq(ind+1,arr,n,vec,sum,fsum);


}

int main(){
    int arr[]={1,2,1,6,5,4,2,1,0,-4};
    int sum=4;
    vector<int> vec;
    sumkSubseq(0,arr,10,vec,sum,0);
}