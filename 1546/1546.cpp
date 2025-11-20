#include <iostream>
#include <vector>

using namespace std;

int howManyScores;

float score;

float maxScore = 0;

vector<float> scores;

float scorePlus = 0;

int main() {

	cin >> howManyScores;

	for (int _ = 0; _ < howManyScores; _++) {
		cin >> score;
		scores.push_back(score);
	}

	for (int i = 0; i < howManyScores; i++) {
		if (maxScore < scores[i]) {
			maxScore = scores[i];
		}
	}

	for (int i = 0; i < howManyScores; i++) {
		scores[i] = scores[i] / maxScore * 100;
	}

	for (int i = 0; i < howManyScores; i++) {
		scorePlus += scores[i];
	}

	cout << scorePlus / howManyScores;

	return 0;
}