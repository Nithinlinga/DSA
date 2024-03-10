#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,6> myarray;
    myarray={1,2,3,45,64,0};
    sort(myarray.begin(),myarray.end());
    for(int i=0;i<6;i++){
        cout<<myarray.at(i)<<" ";
    }
    cout<<myarray.front()<<" ";
    cout<<myarray.size();

}