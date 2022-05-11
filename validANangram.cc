#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        //Hash Map
        unordered_map<char, int> um;
        for(int i=0;i<s.length();i++){
            um[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            cout<<um[t[i]]<<endl;
            if(um[t[i]])
                um[t[i]]--;
            else
                return false;
        }
        return true;
    }

int main(){
cout<<isAnagram("cat", "cat");
}