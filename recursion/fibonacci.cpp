#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1)
    return n;
    int last=fibo(n-1);
    int sLast=fibo(n-2);
    return last+sLast;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"Fibonacci series is ";
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
}