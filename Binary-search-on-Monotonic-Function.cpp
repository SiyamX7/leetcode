#include <bits/stdc++.h>
using namespace std;                   

int findSmallestX(int k){
	int left = 0, right = 50, ans = -1;

	while(left <= right){
		int mid = left + (right - left) / 2;

		if(mid * mid >= k){
			ans = mid;
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return ans;
}

int main() {
    int k = 50;
    cout << "Smallest x such that x^2 >= " << k << " is: " << findSmallestX(k) << endl;
    return 0;
}