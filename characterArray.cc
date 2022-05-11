#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="HelloAnand";
    int n=s.length();
    char ch[n+1];
    strcpy(ch,s.c_str());
    for(int i=0;i<n;i++){
        cout<<ch[i]<<endl;
    }
}