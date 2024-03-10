#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={1,2,3,4,5,6,7,8,9,10};
    cout<<accumulate(v1.begin(),v1.end(),0);
}