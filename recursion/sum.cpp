#include<bits/stdc++.h>
using namespace std;
int sumN(int n){
    // if(n<1){
    //     cout<<sum;
    //     return;
    // }
    // sumN(n-1,sum+n);

    //return sum rather than printing
    if(n<1){
        return 0;
    }
    return n+sumN(n-1);
}
int main(){
    int sum=sumN(10);
    cout<<sum;
}