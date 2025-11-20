#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int where;
int make = 1;
int howManyMoves = 1;
int temp = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> where;
	while (true) {
		if (where <= make) {
			cout << howManyMoves;
			return 0;
		}
		howManyMoves++;
		temp += 6;
		make += temp;
	}
}