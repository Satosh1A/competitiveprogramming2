#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
using namespace std;
using ll = long long;
const int inf = 1e9;
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define chmin(a,b) a=min(a,b)
#define chmax(a,b) a=max(a,b)
#define all(obj) (obj).begin(),(obj).end()

int A[5];

int main(){
    rep(i, 0, 5) cin >> A[i];

    vector<int> v;
    for(int i=0;i<5;i++) v.push_back(i);
    int ans = inf;
    do {
        int t = 0;
        rep(i, 0, 5) {
            int vi = v[i];
            if (0 < t % 10) t = t - (t % 10) + 10;
            t += A[vi];
        }
        chmin(ans, t);
    } while (next_permutation(all(v)));
    cout << ans << endl;
    return 0;
}