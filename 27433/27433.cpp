#include <iostream>

using namespace std;

long long int num = 1;
int howMany;

int main() {
	cin >> howMany;
	for (int i = 1; i <= howMany; i++) {
		num *= i;
	}
	cout << num;
}