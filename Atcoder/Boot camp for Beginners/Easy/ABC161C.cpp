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
    ll n,k;
    cin >> n >> k;
    ll ans=n;
    if(n>k){
        ans = n%k;
    }
    ans = min(ans,abs(ans-k));
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/12.
//
