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
    ll h;
    cin >> h;
    ll ans = 1;
    ll index = 0;
    while(h>0){
        index++;
        h/=2;
    }
    ll box = 2;
    for(int i=1;i<index;i++){
        ans += box;
        box*=2;
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/18.
//
