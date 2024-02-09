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
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> box(n,0);
    for(ll i=0;i<q;i++){
        ll a;
        cin >> a;
        box[a-1]++;
    }
    for(ll i=0;i<n;i++){
        if(q-box[i]>=k) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
//
// Created by satos on 2024/02/09.
//
