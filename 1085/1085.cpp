#include <bits/stdc++.h>

using namespace std;

int toX, toY;
int x, y, w, h;

int main() {
    cin >> x >> y >> w >> h;
    if (x > w - x) {
        toX = w - x;
    } else {
        toX = x;
    }
    if (y > h - y) {
        toY = h - y;
    } else {
        toY = y;
    }
    if (toX > toY) {
        cout << toY;
    } else {
        cout << toX;
    }
}