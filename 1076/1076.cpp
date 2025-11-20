#include <bits/stdc++.h>

using namespace std;

map<string, int> value = {
    {"black",0},
    {"brown",1},
    {"red",2},
    {"orange",3},
    {"yellow",4},
    {"green",5},
    {"blue",6},
    {"violet",7},
    {"grey",8},
    {"white",9}
};

map<string, int> cross = {
    {"black",1},
    {"brown",10},
    {"red",100},
    {"orange",1000},
    {"yellow",10000},
    {"green",100000},
    {"blue",1000000},
    {"violet",10000000},
    {"grey",100000000},
    {"white",1000000000}
};

string fir, sec, thi;

int main() {
    cin >> fir >> sec >> thi;
    long long int answer = (stoll(to_string(value[fir]) + to_string(value[sec])) * cross[thi]);
    cout << answer;
}