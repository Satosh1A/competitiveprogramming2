#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <vector>
#include <deque>

int main() {
    int n;
    int d[101010];
    cin >> n;
    for(int i=0;i<n;i++) cin >> d[i];
    sort(d,d+n);
    cout << d[n/2]-d[n/2-1] << endl;
    return 0;
}
//
// Created by satos on 2024/01/13.
//
