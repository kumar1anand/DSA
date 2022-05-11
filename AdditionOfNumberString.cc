#include<bits/stdc++.h>
using namespace std;

void convert(string s){
    int len=s.length();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i])
             cout<<"Not a palindrome"<<endl;
        else
            cout<<"A palindrome"<<endl;
    }
}
int main(){
    int a=131;
    string s=to_string(a);
    convert(s);
    cout<<s;
}