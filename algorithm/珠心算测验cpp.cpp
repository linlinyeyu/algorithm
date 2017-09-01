#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

void getCommonSum() {
	int n;
	cin >> n;
	int *agg = new int[n];
	int *max = new int[20000];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> agg[i];
		max[agg[i]] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++)
		{	
			max[agg[i] + agg[j]] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (max[agg[i]] == 0) {
			count++;
		}
	}

	cout << count << endl;
}