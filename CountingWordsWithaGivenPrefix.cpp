#include <bits/stdc++.h>
using namespace std;

int prefixCount(vector<string>& words, const string& pref) {
    int sz = pref.size();
    int count = 0;
    for (auto& str : words) {
        if (pref == str.substr(0, sz)) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> words = {"apple", "app", "application", "banana", "appetite"};
    string pref = "app";

    int result = prefixCount(words, pref);
    cout << result;
    return 0;
}
