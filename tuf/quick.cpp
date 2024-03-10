#include <iostream>
using namespace std;


int partition(int *arr,int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while (arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
       
        
    }
     swap(arr[low],arr[j]);
        return j;
}
void quicksort(int *arr,int low ,int high){
    if(low<high){
        int pIndex=partition(arr,low,high);
        quicksort(arr,low,pIndex-1);
        quicksort(arr,pIndex+1,high);
    }
}
int main(){
    int arr[]={2,3,4,5,6,7,6,5,3,3,2};
    quicksort(arr,0,10);
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
}