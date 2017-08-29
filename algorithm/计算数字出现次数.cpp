#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;



void getCount() {
	int a;
	char b;
	cin >> a >> b;
	string str = "";
	string c;
	for (int i = 1; i <= a; i++)
	{
		c = std::to_string(i);
		str += c;
	}
	int k = 0;

	for (int i = 0; i < str.length(); i++)
	{	
		char d = str[i];
		if (b == d)
		{
			k++;
		}
	}
	cout << k << endl;
}