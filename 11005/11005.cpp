#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

string answer;
int originalNum, jinbub, temp;

//아스키코드 A 65
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> originalNum >> jinbub;
	while (true) {
		if (originalNum / jinbub > 0) {
			temp = originalNum % jinbub;
			originalNum /= jinbub;
			if (temp < 10) {
				answer.append(to_string(temp));
			}
			else {
				answer.push_back((char)(temp + 55));
			}
		}
		else {
			if (originalNum < 10) {
				answer.append(to_string(originalNum));
			}
			else {
				answer.push_back((char)(originalNum + 55));
			}
			reverse(answer.begin(), answer.end());
			cout << answer;
			return 0;
		}
	}
}