#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec;
    //  cout<<vec.size()<<endl;
    int a;
    // for(int i=0;i<5;i++){
    //     cin>>a;
    //     vec.push_back(a);
    //     cout<<endl;
    //     cout<<vec.capacity()<<endl;
    // }
    // for(int i=0;i<5;i++){
    //     cout<<vec[i]<<endl;
    // }
    //     cout<<vec.size();
    //     cout<<vec.capacity();
    int low=0;
    int high=vec.size()-1;
    int pos=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(vec[mid]==a)
        pos=mid;
        else if(vec[mid]>a){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return pos;
    
}