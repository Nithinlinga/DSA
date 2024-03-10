#include<iostream>
using namespace std;
int main(){
    string s="abcdessdftrdcvgfdcvgfrdcvfrd";
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;

    }
    int q;
    cin>>q;
    char ch;
    while (q--)
    {
        cin>>ch;
        cout<<"number of character of "<<ch<<" is "<<hash[ch-'a']<<endl;
    }
    
}