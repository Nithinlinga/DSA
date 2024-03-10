#include <iostream>
using namespace std;

void merge(int *arr,int low,int mid,int high){
    int temp[20];
    int left=low;
    int right=mid+1;
    int i=0;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            left++;
        }
        else{
            temp[i]=arr[right];
            right++;
        }
        i++;
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int k=low;k<=high;k++){
        arr[k]=temp[k-low];
    }

}
void divide(int *arr,int low,int high){
    if(low==high)
    return;
    int mid=(low+high)/2;
    divide(arr,low,mid);
    divide(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int arr[]={1,2,5,6,8,5,4,2,45,56,7,10};
    int high=sizeof(arr)/sizeof(arr[0])-1;
    divide(arr,0,high);
    for(int i=0;i<=high;i++){
        cout<<arr[i]<<" ";
    }
    
}