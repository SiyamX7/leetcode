#include <bits/stdc++.h>
using namespace std;            

__int128_t StringtoInt128(string s){
	__int128_t result = 0;

	for(char c : s){
		if(c == '-') continue;

		result = result * 10 + (c - '0');
	}

	if(s[0] == '-'){
		 return -result;
	} else {
		return result;
	}
}    

string int128toString(__int128_t num){
	bool isNeg = (num < 0);
	if(isNeg) num = -num;

	string result = "";
	while(num > 0){
		result.push_back('0' + (num % 10));
		num /= 10;
	}

	reverse(result.begin(), result.end());

	if(isNeg){
		return('-' + result);
	} else {
		return result;
	}

}   

int main() {
	// ei number direct input newa jayna. amra string 
	// input nibo and int e convert kore nibo

	string one , two;
	cin >> one >> two;
	__int128_t x = StringtoInt128(one);
    __int128_t y = StringtoInt128(two);

    __int128_t gcd = __gcd(x,y);


    string s1 = int128toString(gcd);
    // string s2 = int128toString(y);

    cout << s1 << endl;
}