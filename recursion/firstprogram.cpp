#include <bits/stdc++.h>
using namespace std;
void print(int n,int i){
    //n to 1 elements
    // if(n<1)
    // return;
    // cout<<n<<endl;
    // print(n-1);

    //1 to n elements
    // if(i>n)
    // return;
    // cout<<i<<endl;
    // cout<<"Nithin"<<endl;
    // print(n,i+1);

    //backtracking 1 to n
    // if(n<1)
    // return;
    // print(n-1);
    // cout<<n<<endl;

    //backtracking n to 1
    if(i>n)
    return;
    print(n,i+1);
    cout<<i<<endl;
}
int main()
{
    int n;
    cout << "enter no of elements";
    cin>>n;
    print(n,1);
}