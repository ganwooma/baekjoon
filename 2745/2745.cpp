#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string N;
long long int B;
long long int last;

int main() {
	cin >> N >> B;
	for (int i = 0; i < N.length(); i++) {
		if (N[i] >= 48 && N[i] <= 57) {
			last += (N[i] - 48) * (long long int)(pow(B, N.length() - i - 1));
		}
		else {
			last += (N[i] - 55) * (long long int)(pow(B, N.length() - i - 1));
		}

	}
	cout << last;
}