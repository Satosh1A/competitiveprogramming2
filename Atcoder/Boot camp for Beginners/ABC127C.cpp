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
    int rmax=0,lmin=101010;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int r,l;
        cin >> r >> l;
        rmax = max(rmax,r);
        lmin = min(lmin,l);
    }
    if(rmax<=lmin) cout << lmin-rmax+1 << endl;
    else cout << 0 << endl;
    return 0;
}
//
// Created by satos on 2024/01/22.
//
