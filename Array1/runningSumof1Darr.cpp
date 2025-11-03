#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& arr) {
    int n = arr.size();
    // Initialize a result array to store running sums
    vector<int> result(n);
    // Initialize the first element of result with the first element of arr
    result[0] = arr[0];
    
    // Calculate running sum
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] + arr[i];
    }
    return result;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

// Optimal approach (in-place modification)
vector<int> runningSum(vector<int>& arr) {
    int n = arr.size();
    // Calculate running sum in-place
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];
    }
    return arr;
}
// Time Complexity: O(n)
// Space Complexity: O(1)