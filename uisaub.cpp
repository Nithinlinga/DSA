#include <bits/stdc++.h>
using namespace std;
int findTheLarger(int n, vector<int> &v) {
    // Write your code here.
    int acenSum=0;
    if(v[0]<v[1])
    acenSum=v[0];
    int dcenSum=0;
    int i=0;
    for(i=1;i<n;i++){
        if(v[i-1]<v[i]){
            acenSum+=v[i];
        }
    }
    dcenSum+=v[i-2];
    cout<<dcenSum<<endl;
    for(int j=i-1;j<n;j++){
        if(v[j-1]>v[j]){
            dcenSum+=v[j];
        }
    }
    cout<<acenSum<<" "<<dcenSum<<endl;
    if(acenSum>dcenSum)
    return 0;
    else if (acenSum<dcenSum)
    return 1;
    else 
    return -1;
}
int main() {
    // Write C++ code here
    vector<int> vec={9,10,5,3,1};
    cout<<findTheLarger(5,vec);
    
    return 0;
}

