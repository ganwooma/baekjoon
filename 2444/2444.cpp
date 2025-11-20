#include <iostream>

using namespace std;

int number;

int main() {
	cin >> number;
	
	for (int i = 1; i <= (number - 1) * 2 + 1; i++) {
		if (i < number) {
			string space(number - i, ' ');
			string star(1 + ((i - 1) * 2), '*');
			cout << space << star << '\n';
		}
		else if (i > number) {
			string space(i - number, ' ');
			string star(1 + (((number - 1) * 2 + 1 - i) * 2), '*');
			cout << space << star << '\n';
		}
		else {
			string star(1 + ((number - 1) * 2), '*');
			cout << star << '\n';
		}
	}

	return 0;
}