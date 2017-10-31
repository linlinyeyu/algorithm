#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	int sum = 0;
	string x;
	cin >> x;
	int k = 1;
	for (int i = 0; i < x.length(); i++) {
		if (i != 1 && i != 5 && i != 11 && i != 12) {
			sum += (x[i] - '0') * k;
			k++;
		}
	}

	int n = sum % 11;
	if (n == 10 && x[x.length() - 1] == 'X') {
		cout << "Right";
	}
	else if (n != (x[x.length() - 1] - '0')) {
		if (n == 10) {
			x[x.length() - 1] = 'X';
			cout << x;
		}
		else {
			x[x.length() - 1] = (n + '0');
			cout << x;
		}
	}
	else {
		cout << "Right";
	}

	return 0;
}