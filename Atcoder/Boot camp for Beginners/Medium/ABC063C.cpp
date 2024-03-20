#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
#include <unordered_map>
#include <map>

using namespace std;
void _main();
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    _main();
}
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
const int mod = 1e9+7;
#define rep(i,a,b) for(int i=(a);i<(b);++i)
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
#define all(obj) (obj).begin(),(obj).end()
#define P pair<int,int>
#define V vector<int>
#define M map<int,int>
#define S set<int>
#define PQ priority_queue<int>
#define PQG priority_queue<int,V,greater<int>>
#define pb(a) push_back(a)
#define mp make_pair
unordered_map<ll,ll> memo;
int gcd(int a, int b){if(a%b == 0){return b;}else{return gcd(b, a%b);}}
int lcm(int a, int b){return a*b / gcd(a, b);}

int N, A[101010];
int dp[101][10101];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];

    dp[0][0] = 1;
    rep(i, 0, N) rep(j, 0, 10001) if(dp[i][j]) {
                dp[i + 1][j] = 1;
                dp[i + 1][j + A[i]] = 1;
            }

    int ans = 0;
    rep(j, 0, 10001) if (j % 10 && dp[N][j]) ans = max(ans, j);
    cout << ans << endl;
}//
// Created by satos on 2024/03/20.
//
