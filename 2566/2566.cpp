#include <iostream>

using namespace std;

int input;
int maxNum = -1;
int maxRow;
int maxCol;

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> input;
			if (maxNum < input) {
				maxRow = i;
				maxCol = j;
				maxNum = input;
			}
		}
	}

	cout << maxNum << '\n';
	cout << maxRow << ' ' << maxCol;
}