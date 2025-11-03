#include <bits/stdc++.h>
using namespace std;

// brute force approach (sorting the array)

vector<int> findMinMax(vector<int>& arr) {
    // Create a copy of the original array
    vector<int> sortedArr = arr;
    
    // Sort array
    sort(sortedArr.begin(), sortedArr.end()); 
    // Return minimum and maximum elements
    return {sortedArr[0], sortedArr[sortedArr.size()-1]};
}

// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(n) due to the copy of the array


// optimal approach (single traversal)
vector<int> findMinMax(vector<int>& arr) {
    int n = arr.size();
    // Initialize min and max values
    int mini = INT_MAX, maxi = INT_MIN;
    
    // Find minimum and maximum
    for (int i = 0; i < n; i++) { 
        if (arr[i] < mini) mini = arr[i];
        if (arr[i] > maxi) maxi = arr[i];
    }
    // Return minimum and maximum elements
    return {mini, maxi};
}

// Time Complexity: O(n)
// Space Complexity: O(1)


