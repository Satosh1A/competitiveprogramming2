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
    int n,d,x;
    cin >> n >> d >> x;
    int a[110];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        x+=d/a[i];
        if(d%a[i]!=0) x++;
    }
    cout << x << endl;
    return 0;
}
//
// Created by satos on 2024/01/17.
//
