#include <bits/stdc++.h>
using namespace std;
// using kadane's algorithm to find maximum product subarray
 int maxProduct(vector<int>& nums) {
    
        int pre=1,suff=1;
        int ans=INT_MIN;
        int n = nums.size();
        // traverse through the array
        for(int i=0;i<n; i++){
            // handle zeros in the array
            if(pre==0) 
            pre = 1;
            if(suff==0)
            suff = 1;

            // calculate prefix and suffix products
          pre *= nums[i];
          suff *= nums[n-i-1];
            // update the maximum product found so far
           ans = max(ans,max(pre,suff));  
        }
        return ans;
    }