#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int N;
int howMany = 0;
int temp;

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
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		if (isPrime(temp)) {
			howMany++;
		}
	}
	cout << howMany;
}