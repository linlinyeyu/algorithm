#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
char str[10000];

void count(int number,int type) {
	int score1 = 0,score2=0;
	for (int i = 0; i < number; i++) {
		if (str[i] == 'W')
		{
			score1++;
		}
		if (str[i] == 'L') {
			score2++;
		}

		if (((score1 == type || score2 == type)&&(abs(score1-score2) >= 2)) || ((score1>type || score2 > type) && (abs(score1 - score2) == 2))) 
		{
			cout << score1 << ':' << score2<<endl;
			score1 = 0;
			score2 = 0;
			cout << endl;
		}
	}
	cout << score1 << ":" << score2;
}

void countWin() {
	int k = 0;
	while ((str[k] = getchar()) != EOF) {
		if (str[k] == 'E')
		{
			break;
		}
		k++;
	}

	count(k,11);
	cout << endl << endl;
	count(k,21);
}