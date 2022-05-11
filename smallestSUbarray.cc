#include<bits/stdc++.h>
using namespace std;

int SmallestSUbArray(int arr[], int num,int n){
    int l=0;
    int r=0;
    int ans=INT_MAX;
    int sum=0,i=0;
    while(r<n){
        while(sum<=num && r<n){
               sum=sum+arr[r++];
        }
        while(sum>num && l<n){// if sum is greater than required then we will check after decreasing sum whether size is less or not
            if(r-l<ans) ans=r-l;
            sum-=arr[l++];
        }
    }
    return ans;
}
int main(){
    
    int num,n;
    cout<<"Enter size of array"<<endl;
    cin>>n; 
    cout<<"Enter the number for which sum to be check"
    cin>>num;
    int arr[n];
    cout<<"Array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Smallest subarray is "<<endl;
    cout<<SmallestSUbArray(arr,num,n);
}    