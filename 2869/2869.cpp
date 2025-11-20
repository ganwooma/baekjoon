#include <iostream>

using namespace std;

long long int day, night, howLong;

int main() {

	cin >> day >> night >> howLong;
	cout << (howLong - night - 1) / (day - night) + 1;
}