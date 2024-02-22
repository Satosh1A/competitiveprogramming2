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

void _main() {
    int n;
    cin >> n;
    V a(n+1);
    rep(i,1,n+1){
        cin >> a[i];
    }
    int now = 1;
    int ans = 0;
    V b(n+1,0);
    while(now!=2){
        ans++;
        if(b[now]==0){
            b[now]++;
            now = a[now];

        }else{
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
}
//
// Created by satos on 2024/02/22.
//
