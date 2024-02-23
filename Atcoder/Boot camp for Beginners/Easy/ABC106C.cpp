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
    string s;
    ll k;
    cin >> s >> k;
    if(k<=100){
        if(s.size()<k){
            rep(i,0,s.size()){
                if(s[i]!='1') {
                    cout << s[i] << endl;
                    return;
                }
            }
        }else{
            rep(i, 0, k) {
                if (s[i] != '1') {
                    cout << s[i] << endl;
                    return;
                }
            }
            cout << '1' << endl;
        }
    }else{
        rep(i,0,s.size()){
            if(s[i]!='1') {
                cout << s[i] << endl;
                return;
            }
        }
    }
}
//
// Created by satos on 2024/02/14.
//