#include <bits/stdc++.h>
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

int main() {
    fastIO(); 

    int t; 
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        vi v(n);

        for(int &val : v){
        	cin >> val;
        }

        vi diff(n+1, 0);

        int q;
        cin >> q;
        while(q--){
        	int l, r, x;
        	cin >> l >> r >> x;
        	diff[l] += x;
        	diff[r+1] -= x;
        }

        vi pref(n+1, 0);

    	pref[0] = diff[0];

    	for(int i = 1; i < n+1; i++){
    		pref[i] = diff[i] + pref[i-1];
    	}

        print(pref);
        for(int i = 0; i < n; i++){
        	cout << v[i] + pref[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
    