#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

bool recover(string x,string y,string z,int n) {
	for (int i = 0; i < n; i++)
	{
		int a = y[i] - 'a';
		int b = z[i] - 'a';
		int c = x[n - i - 1] - 'a';
		if ((a + b - 2 * c)%26 != 0){
			return false;
		}
	}
	return true;
}

void out() {
	string x, y, z;
	int n;
	cin >> n;
	cin >> x;
	cin >> y;
	cin >> z;
	if (recover(x,y,z,n))
	{
		for (int i = n-1; i >= 0; i--)
		{
			cout << x[i];
		}
	}
	else if (recover(y,x,z,n))
	{
		for (int i = n - 1; i >= 0; i--)
		{
			cout << y[i];
		}
	}
	else
	{
		for (int i = n - 1; i >= 0; i--)
		{
			cout << z[i];
		}
	}
}