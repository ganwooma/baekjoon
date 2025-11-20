#include <iostream>
#include <string>

using namespace std;

string num1, num2;

int firstNum, lastNum;

int main(void) {
	cin >> num1 >> num2;
	firstNum = num1[0];
	num1[0] = num1[2];
	num1[2] = firstNum;
	firstNum = num2[0];
	num2[0] = num2[2];
	num2[2] = firstNum;
	if (stoi(num1) < stoi(num2)) {
		cout << num2;
	}
	else {
		cout << num1;
	}
}