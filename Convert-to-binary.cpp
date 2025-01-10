#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;                   
string  convert_bainary(int year)
{
	int i=31;
    for(;i>=0;i--)
    {
    	if((1&(year>>i)))
    	{
    		break;
    	}
    }
    string s;
    for(int j=i;j>=0;j--)
    {
    	s+= to_string( 1&(year>>j) );
    }
    return s;
}
int main() {
	string date = "2080-02-29";
	int year = stoi(date.substr(0,4));
	int month = stoi(date.substr(5,2));
	int day = stoi(date.substr(8,2));
	cout << year << " " << month << " " << day;
	cout<<endl;
	string str;
	str=convert_bainary(year);
	str+='-';
	str+=convert_bainary(month);
	str+='-';
	str+=convert_bainary(day);
	cout << str;
}