#include <iostream>
#include <vector>
#include <string>

using namespace std;

int num, where;
int nowWhere = 1;
int nowNum = 1;

int main() {
	cin >> num >> where;

	while (true) {
		if (num % nowNum == 0) {
			if (nowWhere == where) {
				cout << nowNum;
				return 0;
			}
			nowWhere++;
		}
		nowNum++;
		if (nowNum > num) {
			cout << 0;
			return 0;
		}
	}
}