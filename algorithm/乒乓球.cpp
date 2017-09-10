#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void count11(char str[]) {
	int score1 = 0,score2=0;
	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == 'W')
		{
			score1++;
		}
		if (str[i] == 'L') {
			score2++;
		}

		if (score1 == 11 || score2 == 11) 
		{
			cout << score1 << ':' << score2<<endl;
			score1 = 0;
			score2 = 0;
		}
	}
}

void count21(char str[]) {
	int score1 = 0,score2=0;
	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] == 'W') {
			score1++;
		}
		if (str[i] == 'L') {
			score2++;
		}
		if (score1 == 21 || score2 == 21)
		{
			cout << score1 << ':' << score2 << endl;
			score1 = 0;
			score2 = 0;
		}
	}
}

void countWin() {
	char str[10000];
	int i = 0;
	int k = 0;
	while (true) {
		if ((str[i] = getchar()) != EOF)
		{
			if (str[i] == 'E')
			{
				break;
			}
		}
	}

	count11(str);
	cout << endl << endl;
	count21(str);
}