#include <bits/stdc++.h>
#include <vector>
#define pb push_back
using namespace std;                   

int main() {
vector<vector<char>> board = {
    {'5', '3', '4', '6', '7', '8', '9', '1', '2'},
    {'6', '7', '2', '1', '9', '5', '3', '4', '8'},
    {'1', '9', '8', '3', '4', '2', '5', '6', '7'},
    {'8', '5', '9', '7', '6', '1', '4', '2', '3'},
    {'4', '2', '6', '8', '5', '3', '7', '9', '1'},
    {'7', '1', '3', '9', '2', '4', '8', '5', '6'},
    {'9', '6', '1', '5', '3', '7', '2', '8', '4'},
    {'2', '8', '7', '4', '1', '9', '6', '3', '5'},
    {'3', '4', '5', '2', '8', '6', '1', '7', '9'} // Invalid row with duplicate '5's
};


	bool valid = true;
	vector<map<char,int>> big;
	
	for(int i = 0; i < 9; i++){
		map<char,int> small;
		for(int j = 0; j < 9; j++){
			if(board[i][j] != '.')
			small[board[i][j]]++;
		}
		big.pb(small);
	}

	for(auto small : big){
		for(auto val : small){
			if(val.second > 1){
				valid = false;
				break;
			}
		}
	}

	vector<map<char,int>> gg;
	for(int i = 0; i < 9; i++){
		map<char,int> small;
		for(int j = 0; j < 9; j++){
			if(board[j][i] != '.')
			small[board[j][i]]++;
		}
		gg.pb(small);
	}

	for(auto small : gg){
		for(auto val : small){
			if(val.second > 1){
				valid = false;
				break;
			}
		}
	}

	cout << valid ;
}