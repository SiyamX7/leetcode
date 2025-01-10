#include <bits/stdc++.h>
#include <climits>
#include <string>
using namespace std;

#define ll long long                
#define vi vector<int>              
#define vll vector<long long>       
#define pii pair<int, int>          
#define pll pair<long long, long long> 
#define pb push_back                
#define mp make_pair                
#define all(v) v.begin(), v.end()  
#define sz(x) (int)(x.size())       
#define F first                     
#define S second                    
#define endl '\n'                   

// Constants
const int MOD = 1e9 + 7;            // Common modulus
const ll INF = 1e18;                // Representation of infinity

void fastIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// Function to print a vector (utility function)
template <typename T>
void print(const vector<T>& vec) {
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

string sol(ll x){
	if(x < 4) return "NO";
	if(x == 4) return "YES";

	ll left = 0;
	ll right = 1e6;
	ll sus = -1;
	while(left <= right){
		ll mid = (left + right)/2;
		if(mid * mid == x){
			sus = mid;
			break;
		} else if(mid * mid < x){
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

    if (sus == -1) return "NO";
    if (sus <= 1) return "NO";
    if (sus == 2) return "YES";
	if (sus % 2 == 0) return "NO";
    
    for (int i = 3; i <= sqrt(sus); i += 2) { 
        if (sus % i == 0) {
            return "NO"; 
        }
    }
    return "YES";
}

int main() {
    fastIO(); 

    int t; 
    cin >> t; 

    while (t--) {
        ll x;
        cin >> x;
        string s = sol(x);
        cout << s << endl;
    }

    return 0;
}
    