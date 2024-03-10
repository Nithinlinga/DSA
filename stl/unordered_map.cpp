#include<iostream>
#include<unordered_map>
using namespace std;
void find_freq(int* arr,int n){
    unordered_map<int,int> map1;
    int i=0;
    while(i<n){
        int j=arr[i];
        int k=0;
        int count=0;
        for(k=0;k<n;k++){
            if(j==arr[k]){
                count=count+1;
            }
            
        }
        map1[j]=count;
        i++;
    }
    for(auto &a: map1){
        cout<<a.first<<"-->"<<a.second<<endl;
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,5,3,2,1};
    int n=sizeof(arr)/4;
    find_freq(arr,n);
}