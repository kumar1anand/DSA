#include<iostream>
#include<vector>

using namespace std;

 void nextPermutation(vector<int>& number) {
        int i = 0;
        for(i = number.size() - 1 ; i > 0; i--){        //Finding the index needed to be swapped.
            if(number[i] > number[i - 1]){
                break;
            }
        }
        if(i == 0){     
            reverse(number.begin() , number.end());     // Permutation is in descending order. Sort it to ascending order.
        } else {
            int x = number[i - 1], small = i;           
            for(int j = i + 1; j < number.size(); j++){     //Finding the number just greater than at index needed to be swapped.
                if(number[j] > x && number[j] <= number[small]){
                    small = j;
                }
            }
            
            swap(number[i - 1] , number[small]);        //Swapping the numbers.
        
            sort(number.begin() + i, number.end());     // Sorting the array after the swapped index.
        }
    }


int main() {
    vector <int> v {3,2,1};
    int n = v.size();
    nextPermutation(v);
}