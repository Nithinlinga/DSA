#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1;
    vec1.push_back(12);
    vec1.push_back(11);
    vec1.push_back(11);
    cout<<vec1.size()<<endl;
    cout<<vec1.max_size()<<endl;
    cout<<vec1.capacity();
}