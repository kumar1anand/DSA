#include<bits/stdc++.h>
using namespace std;

int power(int x, int num){
    if( num==0) return 1;
    if(x==0) return 0;

        int res1=pow(x,num-1);
        int res=res1*res1;
        return res;
}
int main(){
   int resut= power(2,2);
   cout<<resut;
}