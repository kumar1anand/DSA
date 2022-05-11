#include<bits/stdc++.h>
using namespace std;


bool isValid(string str){
    stack<char> s;
    bool ans= true;
    for(int i=0;i<str.length();++i){
       if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            s.push(str[i]);
       }

       
       else if(!s.empty() && str[i]==')'){
           if(s.top()=='('){
               s.pop();
           }
           else{
               ans=false;
               break;
           }
       }

       else if(!s.empty() && str[i]=='}'){
           if(s.top()=='{'){
               s.pop();
           }
           else{
               ans=false;
               break;
           }
       }

       else if(!s.empty() && str[i]==']'){
           if(s.top()=='['){
               s.pop();
           }
           else{
               ans=false;
               break;
           }
       }
    }
    if(!s.empty()) return false;//if some open bracket is there

    return ans;
}


int main(){
    string str="()[]{}";
    if(isValid(str)){
        cout<<"Valid parenthesis";
    }else{
        cout<<"Not a valid paranthesis";
    }
}