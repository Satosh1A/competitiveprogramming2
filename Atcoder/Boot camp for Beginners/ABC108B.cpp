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
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    x3=x2+y1-y2;
    y3=y2+x2-x1;
    x4=x1+y1-y2;
    y4=y1+x2-x1;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}
//
// Created by satos on 2024/01/19.
//
