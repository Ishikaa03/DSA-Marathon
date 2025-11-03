#include <bits/stdc++.h>
using namespace std;    

  int majorityElement(vector<int>& nums) {
       int cnt=0;
       int el;
    //    traverse through the array
       for(int i=0;i<nums.size();i++){
        // apply boyer-moore voting algorithm
        if(cnt==0){
            cnt=1;
        el = nums[i];
        }
        else if(nums[i]==el){
            cnt++;
        }else{
            cnt--;
        }
       }
    //verify if el is majority element
       int cnt1=0;
       for(int i=0;i<nums.size();i++){
        // count occurrences of el
        if(nums[i]==el) cnt1++;
       }
    //    check if count is greater than n/2
       if(cnt1>(nums.size()/2)){
        return el;
       }
       return -1;
    }

// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    vector<int> nums = {3, 2, 3};
    int result = majorityElement(nums);
    if (result != -1) {
        cout << "Majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}