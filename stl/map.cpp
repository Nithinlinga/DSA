#include<iostream>
#include<map>
#include<vector>
#include<functional>
using namespace std;
int main(){
    map<int,string,greater<int>> details;
    details[6862]="nithin";
    details[6823]="revanth";
    details[6833]="kaya_bro";
    for(auto &a: details){
        cout<<a.first<<" : "<<a.second<<endl;
    }
    
    map<string,vector<int>> det;
    det["nithin"].push_back(34567);
    det["nithin"].push_back(367);
    det["nn"].push_back(3457);
    det["kiran"].push_back(3467);
    for( auto &b: det){
        cout<<b.first<<" ";
        for(auto &c: b.second){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    cout<<details.at(6862);

} 