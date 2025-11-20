#include <iostream>
#include <string>
#include <vector>

using namespace std;

int howMany;
string input;
vector<string> texts;

int main() {
	cin >> howMany;
	for (int i = 0; i < howMany; i++) {
		cin >> input;
		texts.push_back(input);
	}

	for (int i = 0; i < howMany; i++) {
		cout << texts[i][0] << texts[i][texts[i].length() - 1] << "\n";
	}

	return 0;
}