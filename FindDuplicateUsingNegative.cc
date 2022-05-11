#include<bits/stdc++.h>
using namespace std;

 int findDuplicate(vector<int> &v){
        int n=v.size();
        for(int i=0;i<n;i++){
            if(v[abs(v[i])]>=0){
                v[(v[i])]=- v[(v[i])];
            }
            else{
                return abs(v[i]);
            }
        }
        return 0;
 }


int main(){
    vector<int> v{3,4,1,4,2};
    cout<<findDuplicate(v);
}