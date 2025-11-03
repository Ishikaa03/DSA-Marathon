#include <bits/stdc++.h>
using namespace std;

// function to find the pivot index of the array
// 
 int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        // calculate total sum of the array
        for(int count:nums){
        total_sum +=count;
    }
        // traverse through the array
        for(int i=0; i<nums.size(); i++){
            // calculate right sum
         int  right_sum = total_sum - left_sum - nums[i];
        //    check if left sum is equal to right sum
           if(left_sum==right_sum){
            return i;
           }
        //    update left sum
           left_sum += nums[i];
        }
        return -1;
    }

// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int pivot = pivotIndex(nums);
    if (pivot != -1) {
        cout << "Pivot index is: " << pivot << endl;
    } else {
        cout << "No pivot index found." << endl;
    }
    return 0;
}