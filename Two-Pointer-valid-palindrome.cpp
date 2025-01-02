#include <bits/stdc++.h>
#include <cctype>
using namespace std;                   

int main() {
	// string s = "Was it a car or a cat I saw?";
	// string s = "ab_a";
	string s = "race a car";
	int n = s.size();
	for(int i = 0; i < n; i++){
		char x = s[i];
        if(int(x) >= 65 && int(x) <= 90 || int(x) >= 97 && int(x) <= 122 || int(x) >= 48 && int(x) <=57){
		s[i] = tolower(s[i]);
		} else {
			s[i] = ' ';
		}
	}
	// cout << s;
	
	int left = 0, right = s.size() - 1;
    bool flag = true;

    while(left < right){
    	if(s[left] == ' ') left++;
    	else if(s[right] == ' ') right--;

    	else if(s[left] != s[right]){
    		flag = false;
    		break;
    	} else {
    		left++;
    		right--;
    	}
    }
    cout << (flag ? "Valid Palindrome" : "Invalid Palindrome");
    // cout << flag << endl;
    // cout << int('0') << endl;
    // cout << isalnum('j');
}