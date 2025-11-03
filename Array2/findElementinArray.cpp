#include <bits/stdc++.h>
using namespace std;


// function to search an element in the array
   int search(vector<int>& arr, int x) {
        
        int n = arr.size();
        int ans=0;
        // traverse through the array
        for(int i=0;i<n;i++){
            // if element is found, return its index
            if(arr[i]==x){
                return i;
            }
        }
        // if element is not found, return -1
        return -1;
    }

// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    vector<int> arr = {4, 2, 3, 5, 1};
    int x = 5;
    int result = search(arr, x);
    if (result != -1) {
        cout << "Element " << x << " found at index: " << result << endl;
    } else {
        cout << "Element " << x << " not found in the array." << endl;
    }
    return 0;
}