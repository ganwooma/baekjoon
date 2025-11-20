#include <iostream>
#include <vector>

using namespace std;

vector<int> basket;
vector<int> temp;

int lastBasketNumber, howManyChanges;

int startBasket, lastBasket;

int j;

int main() {
	cin >> lastBasketNumber >> howManyChanges;

	for (int i = 0; i <= lastBasketNumber - 1; i++) {
		basket.push_back(i + 1);
	}

	for (int _ = 0; _ < howManyChanges; _++) {
		cin >> startBasket >> lastBasket;

		for (int i = startBasket - 1; i <= lastBasket - 1; i++) {
			temp.push_back(basket[i]);
		}

		j = startBasket - 1;
		for (int i = temp.size() - 1; i >= 0; i--) {
			basket[j] = temp[i];
			j++;
		}

		temp.clear();
	}

	for (int i = 0; i <= lastBasketNumber - 1; i++) {
		cout << basket[i] << " ";
	}
}