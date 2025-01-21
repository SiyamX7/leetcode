#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;                   

int main() {
	int n, mn, mx;
	string spec;

	cin >> n >> mn >> mx >> spec;
	srand(time(0));

	while(n--){
		int l = rand() % (mx - mn + 1) + mn;
		int len = l;
		while(len--){
			if(len % 4 == 0){
				cout << char((rand() % 26) + 65);
				
				} else if (len % 4 == 1){
				cout << char((rand() % 26) + 97);
				
			} else if (len % 4 == 2){
				cout << char((rand() % 10) + 48);
			} else {
				cout << spec[(rand() % spec.size())];
			}
		}
		cout << endl;
	}
}