#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach

int countMaxFreqElements(int arr[], int n) {
    unordered_map<int, int> freqMap;
    int maxFreq = 0;

    // Count frequency of each element
    int cntMaxfeq =0;
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
        // Update maximum frequency
        maxFreq = max(maxFreq, freqMap[arr[i]]);

        
    }

    // Count how many elements have the maximum frequency
    int count = 0;
    // Iterate through the frequency map
    for (const auto& pair : freqMap) {
        // If the frequency matches maxFreq, add to count
        if (pair.second == maxFreq) {
            count += maxFreq;
        }
        
    }
//    return cntMaxfeq;
    return count;
}

// Time Complexity: O(n) each for loop
// Space Complexity: O(n) for unordered map