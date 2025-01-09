#include <bits/stdc++.h>
#include <cmath>
#include <cstddef>
#include <string>
using namespace std;  

// int reverse(int x) {
//     bool neg = false;

//     if(x < 0){
//     	neg = true;
//     	x = -x;
//     }
    
//     int count = 0;
//     int temp = x;

//     while (temp >= 10) {
//     	temp /= 10;
//     	count++;
//     }

//     int revn = 0;

//     while(x > 0){
//     	revn += (x % 10) * pow(10,count--);
//     	x /= 10;
//     }

//     if(neg) return -revn;
//     return revn;
// }                 
    string reverse(int x) {
        bool neg = false;

        if(x < 0){
            neg = true;
            x = -x;
        }

        string s = to_string(x);
        reverse(s.begin(), s.end());
        int y = to_integer<string>(__byte_op_t<int> s);
        int revn = 0;
        for()
    }  
int main() {
	int num = -10;
	cout << reverse(num);
}