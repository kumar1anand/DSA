#include<bits/stdc++.h>
using namespace std;




    void permutation(vector<int>& nums, int l, vector<vector<int>>&ans)
    {
        if(l==nums.size()){
            ans.push_back(nums);
            return ;
        }
        else{
            for(int i=l;i<nums.size();i++){
                swap(nums[i],nums[l]);
                permutation(nums,l+1,ans);
                swap(nums[i],nums[l]);
            }
        }
    }

  
    vector<vector<int>>  permute(vector<int> &nums){
        vector<vector<int>> ans;
        permutation(nums,0,ans);
        return ans;
    }


int main(){
    vector<int> v={1,2,3};
    vector<vector<int>> res= permute(v);
    for(auto i:res){// printing of nested vector.
       for(auto j: i){
            cout<<j;
       }
       cout<<endl;
    }
}