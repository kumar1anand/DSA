#include<bits/stdc++.h>
using namespace std;


void SelectionSort(int arr[], int n){
        
        for(int i=0;i<n;i++){
            int min_idx=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min_idx]){
                    min_idx=j;
                }
            }

            //swap
            swap(arr[min_idx],arr[i]);
        }
      cout<<"Array is : "<<endl;
        for(int i=0;i<n;i++)
                 cout<<arr[i]<<endl;
}


int main(){
        int arr[6]={4,6,2,3,7,1};
        int size=sizeof(arr)/sizeof(arr[0]);
        SelectionSort(arr,size);
}