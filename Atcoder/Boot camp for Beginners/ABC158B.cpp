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
    ll n,a,b,ans=0;
    cin >> n >> a >> b;
    ans += n/(a+b)*a;
    if(n%(a+b)>a) ans+=a;
    else ans+=n%(a+b);
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/18.
//
