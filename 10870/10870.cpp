#include <iostream>

using namespace std;

int N = 1;
int backback = 0;
int back = 1;
int num = 1;

int main() {
	cin >> N;
	if (N == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 2; i <= N; i++) {
		num = backback + back;
		backback = back;
		back = num;
	}
	cout << num;
}