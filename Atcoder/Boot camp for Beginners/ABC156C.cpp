#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int ans = 1000000;
    for(int i=1;i<=100;i++){
        int box = 0;
        for(int j=0;j<n;j++){
            box += (x[j]-i)*(x[j]-i);
        }
        ans = min(box,ans);
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/03.
//
