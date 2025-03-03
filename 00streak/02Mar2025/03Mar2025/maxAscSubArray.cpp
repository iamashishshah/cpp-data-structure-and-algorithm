#include<iostream>
#include<vector>

using namespace std;
/**
 * Leetcode 1800
 */

int maxAscendingSum(vector<int>& nums) {
        // if(nums.size() == 1){
        //         return nums[0];
        // }
        // int curSum = nums[0];
        // int maxSum = 0;
        // for(int i = 1; i < nums.size(); i++){
        //         if(nums[i] > nums[i -1]){
        //                 curSum += nums[i];
        //          }else if(maxSum < curSum){
        //                  maxSum = curSum;
        //                 curSum = nums[i];
        //         }else{
        //                 curSum = nums[i];
        //         }
        // }
    
        // if(maxSum > curSum){
        //         return maxSum;
        // }else{
        //         return curSum;
        // }
        
        int curr = nums[0], ans = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            curr = nums[i] > nums[i - 1] ? curr + nums[i] : nums[i];
            ans = max(ans, curr);
        }
        return ans;
}

int main(){
    vector<int> nums = {12};
    cout << maxAscendingSum(nums) <<endl;
    return 0;
}