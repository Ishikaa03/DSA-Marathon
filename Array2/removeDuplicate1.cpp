#include <bits/stdc++.h>
using namespace std;

// function to remove duplicates from sorted array
int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        // traverse through the array
        for(int j=1;j<n;j++){
            // if elements are same, skip
            if(nums[i]==nums[j]) continue;
            // if elements are different, update the next position
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        // return the length of the modified array
        return i+1;
}


// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = removeDuplicates(nums);
    cout << "New length after removing duplicates: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}