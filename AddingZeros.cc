#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v{1,2,1,1};
    v.push_back(0);
    v.insert(v.begin(),0);
    for(auto i:v){
        cout<<i;
    }
}