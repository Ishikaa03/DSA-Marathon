void reverseArray(vector<int> &arr , int m) {
    // initialize start and end pointers
    int s=m+1;
    int e=arr.size()-1;
    // until start pointer is less than or equal to end pointer
    while(s<=e){
        // swap the elements at start and end pointers
        swap(arr[s],arr[e]);
        // move the pointers towards each other
        s++;
        e--;
    }
          	
}

// Time Complexity: O(n)
// Space Complexity: O(1)