#include<bits/stdc++.h>
using namespace std;

void duplicate(vector<int> &v){
    unordered_map<int,int>um;
   
    for(int i=0;i<v.size();i++){
        um[v[i]]++;
    }
    for(auto i:um){
        if(i.second > 1)
               cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    vector<int> v{1,2,2,2,3};
    duplicate(v);
}