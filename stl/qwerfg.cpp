#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void find_freq(){


}
int main(){
    vector<int> vec;
    // int arr[]={1,2,3,4,5,5,3,2,1};
    // int n=sizeof(arr)/4;
    // find_freq();
    unordered_map<int,int> map1;
    map1[12]=11;
    map1[12]=11;
    map1[12]=11;
    map1[2]=23;
    map1[43]=123;
    map1[1]=234;
    for(auto &a: map1){
     cout<<a.first<<" "<<a.second<<endl;
    }
}