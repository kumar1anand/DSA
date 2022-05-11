#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> um;
		int key;
		for(int i = 0; i < nums.size(); i++){
			key = nums[i];
			if(um.count(target - key) == 0){
				um[key] = i;
			}
			else{
				return {i, um[target - key]};
			}
		}
		return {};        
	}


int main(){
   vector<int> v{2,7,11,15};
   vector<int> v1;
   v1=twoSum(v, 9);
   for(auto x:v1){
       v.find(x);
   }
}