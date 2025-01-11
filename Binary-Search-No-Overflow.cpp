#include <iostream>
#include <vector>
using namespace std;

// Binary search using `left <= right` (standard exact match search)
int binarySearchExactMatch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) { // Includes both left and right in the range
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }
    return -1; // Target not found
}

// Binary search using `left < right` (finding first element >= target)
int binarySearchFirstGreaterOrEqual(const vector<int>& arr, int target) {
    int left = 0, right = arr.size(); // Note: right = arr.size()

    while (left < right) { // Stops when left == right
        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1; // Exclude mid, search the right half
        } else {
            right = mid; // Include mid, search the left half
        }
    }
    // After loop, left == right is the first index >= target
    if (left < arr.size() && arr[left] >= target) {
        return left;
    }
    return -1; // No element >= target found
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11}; // Sorted array

    // Example 1: Exact match search (using `left <= right`)
    int target1 = 7;
    int result1 = binarySearchExactMatch(arr, target1);
    if (result1 != -1) {
        cout << "Exact match found for " << target1 << " at index " << result1 << endl;
    } else {
        cout << "Exact match not found for " << target1 << endl;
    }

    // Example 2: Find first element >= target (using `left < right`)
    int target2 = 6;
    int result2 = binarySearchFirstGreaterOrEqual(arr, target2);
    if (result2 != -1) {
        cout << "First element >= " << target2 << " is at index " << result2 << " (value: " << arr[result2] << ")" << endl;
    } else {
        cout << "No element >= " << target2 << " found in the array." << endl;
    }

    return 0;
}
