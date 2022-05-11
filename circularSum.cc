#include<bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
        int max_sum = nums[0], min_sum = nums[0], sum = nums[0], prev_min = nums[0], prev_max = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            
            prev_max = max(prev_max + nums[i], nums[i]);
            max_sum = max(max_sum, prev_max);
            
            prev_min = min(prev_min + nums[i], nums[i]);
            min_sum = min(min_sum, prev_min);
        }
        //sum==min_sum --->will be only when all array elements are <0.
        return sum == min_sum ? max_sum : max(max_sum, sum-min_sum);
    }

int main(){
     int n,num;
     cout<<"Enter the number of elements:"<<endl;
     cin>>n;
     vector<int> v;
     cout<<"Enter the array elements"<<endl;
     for(int i=0;i<n;i++){
         cin>>num;
         v.push_back(num);
     }
   cout<< maxSubarraySumCircular(v);
}