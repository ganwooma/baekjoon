#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int num1, num2;
int prime1 = 0;
int prime2 = 0;

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> num1;
	cin >> num2;

	for (int i = num1; i <= num2; i++) {
		if (isPrime(i)) {
			if (prime2 == 0) {
				prime2 = i;
			}
			prime1 += i;
		}
	}

	if (prime1 == 0) {
		cout << "-1";
	}
	else {
		cout << prime1 << "\n" << prime2;
	}
}