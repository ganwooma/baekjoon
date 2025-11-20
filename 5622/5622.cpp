#include <iostream>
#include <string>

using namespace std;

string text;
int timeA = 0;
int a;

int main() {
	cin >> text;
	for (int i = 0; i < text.length(); i++) {
		a = text[i];
		if (a >= 'A' && a <= 'C') {
			timeA += 3;
		}
		else if (a >= 'D' && a <= 'F') {
			timeA += 4;
		}
		else if (a >= 'G' && a <= 'I') {
			timeA += 5;
		}
		else if (a >= 'J' && a <= 'L') {
			timeA += 6;
		}
		else if (a >= 'M' && a <= 'O') {
			timeA += 7;
		}
		else if (a >= 'P' && a <= 'S') {
			timeA += 8;
		}
		else if (a >= 'T' && a <= 'V') {
			timeA += 9;
		}
		else if (a >= 'W' && a <= 'Z') {
			timeA += 10;
		}
	}

	cout << timeA;
}