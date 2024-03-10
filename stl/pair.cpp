#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<pair<int,int>> p;
    p.push_back(make_pair(1,2));
    p.push_back(make_pair(2,3));
    for(auto &a: p){
        cout<< a.first << " "<<  a.second <<" \n";
    }
}