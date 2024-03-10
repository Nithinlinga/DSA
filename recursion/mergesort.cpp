#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int temp[10];
    int i=0;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            i++;
            left++;
        }
        else{
            temp[i]=arr[right];
            i++;
            right++;
        }

    }
    while(left<=mid){
        temp[i]=arr[left];
        i++;
        left++;

    }
    while(right<=high){
        temp[i]=arr[right];
        i++;
        right++;

    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(int arr[],int low,int high){
    if(low>=high)
    return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int arr[]={3,4,5,9,2,1,3};
    mergesort(arr,0,7);
    for(auto it: arr){
        cout<<it<<" ";
    }
}