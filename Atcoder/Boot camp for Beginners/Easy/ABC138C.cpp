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
    double v[1010];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v,v+n);
    double ans=v[0];
    for(int i=1;i<n;i++){
        ans+=v[i];
        ans/=2;
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/13.
//
