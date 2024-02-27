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
    int h,w;
    cin >> h >> w;
    vector<string> s(h+2);
    rep(i,0,w+2){
        s[0].push_back('.');
        s[h+1].push_back('.');
    }
    rep(i,1,h+1){
        cin >> s[i];
    }
    rep(i,1,h+1){
        s[i].insert(0,".");
        s[i].push_back('.');
    }
    rep(i,1,h+1){
        rep(j,1,w+1){
            if(s[i][j]=='.'){
                int a=0;
                rep(k,i-1,i+2){
                    rep(l,j-1,j+2){
                        if(s[k][l]=='#'){
                            a++;
                        }
                    }
                }
                cout << a;
            }else if(s[i][j]=='#'){
                cout << '#';
            }
        }
        cout << endl;
    }
}//
// Created by satos on 2024/02/27.
//
