#include <bits/stdc++.h>
using namespace std;

// function to rotate the array to the right by k steps
  void rotate(vector<int>& nums, int k) {
       int n = nums.size();
    //    handle edge cases
         if (n == 0)
          return;
        // reduce k if it is greater than n
         k = k % n;
         if (k > n)
          return;
        // create a temporary array to store last k elements
        vector<int> temp(k);
        // copy last k elements to temporary array
       for (int i = n - k; i < n; i++)
       {
       temp[i - n + k] = nums[i];
       }
    //    shift the remaining elements to the right
       for (int i = n - k - 1; i >= 0; i--)
       {
       nums[i + k] = nums[i];
       }
    // copy the elements from temporary array to the beginning of the original array
       for (int i = 0; i < k; i++)
       {
       nums[i] = temp[i];
       }

    }

// Time Complexity: O(n) for three loops
// Space Complexity: O(k) for temporary array