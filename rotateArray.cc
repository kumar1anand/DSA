#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)// n=5
{
    int num=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];//
    }
    
    //arr[n-1]=arr[n-2]
    //arr[n-2]=arr[n-3]
    //arr[n-3]=arr[n-4]
    
    arr[0]=num;
}

int main(){
    int arr[5]={1, 2, 3, 4, 5};
    int n=5;
    rotate( arr,  n);
    for(auto i:arr) cout<<i<<endl;
}