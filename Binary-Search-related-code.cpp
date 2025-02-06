#include <bits/stdc++.h>
using namespace std;                   

vector<int> arr = {1, 2, 4, 4, 4, 6, 7, 8, 10}; // Sorted array with duplicates
int x = 4; // Find first position >= 4 and first position > 4

int main() {
	int upper = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
	cout << "upper_bound of " << x << " is: " << upper << endl;	

	int lower = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
	cout << "lower_bound of " << x << " is: " << lower << endl;

	cout << "Frequency of " << x << " is (upper - lower): " << upper - lower << endl; 
}