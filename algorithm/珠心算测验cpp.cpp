#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int *agg = new int[n];
	int *max = new int[n*n];
	for (int i = 0; i < n; i++)
	{
		cin >> agg[i];
	}

}