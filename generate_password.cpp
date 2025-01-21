#include <bits/stdc++.h>
using namespace std;                   

int main() {
	int n, mn, mx;
	string special;
	cin >> n >> mn >> mx;
	cin >> special;
	int strlen=special.size();
	while(n--){
		int num=mn+rand()%(mx-mn);
		while(true)
		{
			char ch=65+rand()%25;
			cout<<ch;
			num--;
			if(num==0)
			{
				cout<<endl;
				break;
			}
			ch=97+rand()%25;
			cout<<ch;
			num--;
			if(num==0)
			{
				cout<<endl;
				break;

			}
			ch=48+rand()%9;
			cout<<ch;
			num--;
			if(num==0)
			{
				cout<<endl;
				break;
			}
			int number=rand()%strlen;
			cout<<special[number];
			num--;
			if(num==0)
			{
				cout<<endl;
				break;
			}

		}

	}
}