#include <bits/stdc++.h>
using namespace std;

// function to find the maximum subarray sum
int maxSubArray(vector<int>& nums) {
    // initialize current sum and maximum sum
        int currsum = nums[0];
        int maxsum = nums[0];
     // traverse through the array
        for(int i=1;i<nums.size();i++){
            // update current sum
            currsum = max(nums[i],currsum+nums[i]);
            // update maximum sum
            maxsum = max(maxsum,currsum);
        }
        return maxsum;
    }

// Time Complexity: O(n)
// Space Complexity: O(1)   

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(nums);
    cout << "Maximum subarray sum is: " << result << endl;
    return 0;
}