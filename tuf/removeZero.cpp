#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,0,0,0,0,7,5,0};
    int j=-1;
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            j=i;
            break;
        }

    }
    for(int i=j+1;i<10;i++){
        if(arr[i]>0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}