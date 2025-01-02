#include <bits/stdc++.h>
using namespace std;                   

string encode(vector<string> & s){
	string newstring = {};
	for(auto &str : s){
		newstring = newstring + str + "XXX"; 
	}
	return newstring;
}

// substr(starting index, length of substring);

vector<string> decode(string s){
	vector<string> strs;
	int j = 0;
	for(int i = 0; i < s.size(); i++){
		if(s.substr(i,3) == "XXX"){ //ekhane s[i] ekta character, tai ' ' hobe, " " hobena
			string sub = s.substr(j, i-j);
			strs.push_back(sub);
			j = i+3;
		}
	}
	return strs;
}

int main() {
	vector<string> strs = {"my name is siyam","neet","code","love","you"};
	string s = encode(strs);
	cout << s <<endl;
	vector<string> nstring = decode(s);
	for(auto val : nstring){
		cout << val << ", ";
	}
}