#include<iostream>
#include<forward_list>
#include<list>
using namespace std;
int main(){
    forward_list<int> list1={1,2,3,2,3,4,5};
    list1.insert_after(list1.begin(),8);
    list1.push_front(0);
    list1.emplace_after(list1.begin(),111);
    list1.emplace_front(10);
    list1.sort();
    list1.unique();
    // list1.emplace_after(list1.,44);
    int ele=6;
    
    list<int> list2;
    list2.push_back(2);
    list2.push_front(22);
    list2.push_back(5);
    list2.push_back(3);
    list2.push_back(4);
    list2.sort();
    for(auto &a: list2){
        cout<< a << "->";
    }

}