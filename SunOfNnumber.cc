#include<bits/stdc++.h>
using namespace std;

void printSum(int i,int num, int sum){
    if(i==num){
        cout<<sum+num;
        return;
    }
    sum+=i;
    printSum(i+1,num,sum);
}

int main(){
    int i=1;
    int num=5;
    int sum=0;
    printSum(i,num,sum);
}