#include<bits/stdc++.h>

using namespace std;

// brute force approach
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
//   sort the array
  sort(arr.begin(), arr.end());
    // traverse through the array to find the duplicate element
  for (int i = 0; i < n - 1; i++) {
    // if current element is equal to next element, return it as duplicate
    if (arr[i] == arr[i + 1]) {
      return arr[i];
    }
  }
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,2};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}