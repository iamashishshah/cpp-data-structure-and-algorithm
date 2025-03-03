#include<iostream>
#include<vector>

/**
 * Leetcode 1752
 */
using namespace std;
bool check(vector<int>& nums) {
    vector<int> numsCopy = nums;
    for(int i = 0; i < nums.size(); i++){
        /**
         * there might be chance that orig array is sorted
         * if not then push_back then check
         */
        int j = 0;
        for(j = 0; j < numsCopy.size() - 1; j++){
            if(numsCopy[j] <= numsCopy[j + 1]){
                // do nothing, just checking
            }else{
                break;
            }
        }
        if((j + 1) == numsCopy.size()) return true;
        numsCopy.push_back(nums[i]);
        numsCopy.erase(numsCopy.begin()+0);
    }
    return false;
       
}

int main(){
        vector<int> nums = {1, 1, 1, 1};
        cout << check(nums) <<endl;
        return 0;
}