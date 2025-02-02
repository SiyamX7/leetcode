#include <bits/stdc++.h>
#include <sstream>
using namespace std;                   

int main() {
    string line = "GeeksForGeeks is a must try";
    vector<string> tokens;
    stringstream check1(line);

    string intermediate;

    // Tokenizing w.r.t. space ' '
    while(getline(check1, intermediate, ' ')){
    	tokens.push_back(intermediate);
    }

    for(auto val : tokens){
    	cout << val << endl;
    }
}