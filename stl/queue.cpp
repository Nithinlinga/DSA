#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // cout<<s.back()<<endl;
    {
    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
        
    }
    }
}