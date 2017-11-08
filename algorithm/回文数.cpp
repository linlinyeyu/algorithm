#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

string x;
int n,len,a[10000],step=1;

void huiwen() {
	cin >> n >> x;
	len = x.length;
	for (int i = 1; i <= x.len; i++)
	{
		if (x[i - 1] < 65) {
			a[i] = x[i - 1] - '0';
		}
		else {
			a[i] = x[i - 1] - 55;
		}
	}
	while (step < 30) {
		if (judge(len) == 1)
		{
			cout << "STEP=" << step - 1;
		}
		step++;
		len = judge(len);
	}
	cout << "Impossible!";
}

int judge(int length)
{
	int c[10001] = { 0 }, s = 1;
	for (int i = 1; i <= length; i++)
	{
		c[i] = a[i] + a[length - i + 1] + c[i];
		c[i + 1] += c[i] / n;
		c[i] %= n;
	}
	if (c[length + 1] != 0)
		length++;
	for (int i = length; i >= 1; i--)
	{
		a[s] = c[i];
		s++;
	}
	return length;
}
int pdhw(int length)
{
	for (int i = 1; i <= length / 2; i++)
		if (a[i] != a[length - i + 1])
			return 0;
	return 1;
}