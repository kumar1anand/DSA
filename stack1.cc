#include<bits/stdc++.h>
using namespace std;

void reverse(string str){
    stack<string> s;
    for(int i=0;i<str.length();i++){
        string word="";
        while(i<str.length() && str[i]!=' '){
            word+=str[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty()){
        cout<<s.top();
        //cout<<" ";
        s.pop();
    }
}
int main(){
    string s="Hey, how are you doing?";
    reverse(s);
}