#include <bits/stdc++.h>
#include <vector>
using namespace std;

int findMin(vector<int>& v) {
    int left = 0, right = v.size() - 1;

    // Handle edge cases where the array is not rotated
    if (v[left] <= v[right]) return v[left];

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is the minimum
        if (v[mid] > v[mid + 1]) return v[mid + 1];
        if (v[mid] < v[mid - 1]) return v[mid];

        // Decide which side to search
        if (v[mid] >= v[left]) {
            // Left side is sorted, go right
            left = mid + 1;
        } else {
            // Right side is unsorted, go left
            right = mid - 1;
        }
    }
    return v[left];
}

int main(){
	vector<int> v = {4,5,6,1,2,3};
	cout << findMin(v);
}