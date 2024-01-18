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
    int n;
    string s;
    int box=0,now=0;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='I') now++;
        else now--;
        box = max(box,now);
    }
    cout << box << endl;
    return 0;
}
//
// Created by satos on 2024/01/19.
//
