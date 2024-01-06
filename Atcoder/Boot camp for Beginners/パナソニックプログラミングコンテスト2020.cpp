#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

int main() {
    ll h,w;
    cin >> h >> w;
    if(h==1||w==1){
        cout << 1 << endl;
        return 0;
    }
    if(h%2==1&&w%2==1) cout << h*w/2+1 << endl;
    else cout << h*w/2 << endl;
    return 0;
}
//
// Created by satos on 2024/01/06.
//
