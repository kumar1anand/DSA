#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    return c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u' || c=='A'|| c=='E'||c=='I'||c=='O'||c=='U';
}
string reverseVowels(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        while(i<j && !isvowel(s[i])) i++;
        while(i<j && !isvowel(s[j])) j--;
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}


int main(){
    cout<<reverseVowels("hello");
    
}