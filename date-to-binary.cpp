#include <bits/stdc++.h>
#include <bitset>
#include <string>
using namespace std;                   

int main() {
	string date = "2020-10-5";
	//bitset use korle back theke iterate korte hobe

	bitset<16> year(stoi(date.substr(0,4)));
	string dt = "";
	int oc = 0;
	for(int i = year.size(); i >= 0 ; --i){
		if(year[i] == 1) oc++;

		if(oc > 0){
			dt += to_string(year[i]);
		}
	}
	dt += '-';
	cout << dt;
}