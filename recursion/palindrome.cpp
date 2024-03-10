#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int i,int n){
    if(i>=n/2)
    return true;
    else if(s[i]==s[n-i-1]){
        return isPalindrome(s,i+1,n);
    }
    else{
        return false;
    }


}
int main(){
    string s;
    cout<<"Enter the string to check palindrome ";
    cin>>s;
    bool b=isPalindrome(s,0,s.size());
    if(b){
        cout<<"The string is palindrome";
    }
    else
    cout<<"The string is not a palindrome";
}