#include <bits/stdc++.h>
using namespace std;                   

int main() {
	string a = "hello";
	int left = 0, right = a.size()-1;
	while(left < right){
		swap(a[left], a[right]);
		left++;
		right--;
	}
	cout << a;
}