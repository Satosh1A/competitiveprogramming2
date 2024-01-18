#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int ans = 1000;
    for(int i=0;i<s.size()-2;i++){
        int box = abs(stoi(s.substr(i,3))-753);
        ans = min(ans,box);
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/18.
//
