#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int howManyRepeats;
int dots = 2;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> howManyRepeats;
	for (int i = 1; i <= howManyRepeats; i++) {
		dots += dots - 1;
	}
	cout << dots * dots;
}