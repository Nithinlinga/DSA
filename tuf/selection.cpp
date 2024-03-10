#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,23,7,6,4,3,5,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<size;i++){
    //     int min=i;
    //     for(int j=i+1;j<size;j++){
    //         if(arr[j]<arr[min]){
    //             min=j;
    //         }
    //     }
    //     if(i!=min){
    //         swap(arr[i],arr[min]);
    //     }
    // }
    // for(int i=0;i<size-1;i++){
    //     for(int j=0;j<size-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    for(int i=0;i<size;i++){
        int j=i;
        while(j>=0&&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}