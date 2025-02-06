#include <bits/stdc++.h>
#include <iomanip>
using namespace std;                   

double squareRootOf(double x){
	double left = 0; 
	double right = x;

	while(right - left > 1e-6){
		double mid = left + (right - left) / 2;

		if(mid * mid < x){
			left = mid;
		} else {
			right = mid;
		}
	}
	return left;
}

int main() {
	double x;
	cin >> x;
	cout << fixed << setprecision(6) << squareRootOf(x) << endl;
}