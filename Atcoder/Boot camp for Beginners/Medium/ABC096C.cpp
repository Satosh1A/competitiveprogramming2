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


void _main() {
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,0,h){
        rep(j,0,w){
            char a;cin>>a;
            s[i].push_back(a);
        }
    }
    rep(i,0,h){
        rep(j,0,w){
            if(s[i][j]=='#'){
                if(i==0){
                    if(j==0){
                        if(s[i+1][j]=='.'&&s[i][j+1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }else if(j==w-1){
                        if(s[i+1][j]=='.'&&s[i][j-1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }else{
                        if(s[i+1][j]=='.'&&s[i][j+1]=='.'&&s[i][j-1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }
                }else if(i==h-1){
                    if(j==0){
                        if(s[i-1][j]=='.'&&s[i][j+1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }else if(j==w-1){
                        if(s[i-1][j]=='.'&&s[i][j-1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }else{
                        if(s[i-1][j]=='.'&&s[i][j+1]=='.'&&s[i][j-1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }
                }else{
                    if(j==0){
                        if(s[i-1][j]=='.'&&s[i+1][j]=='.'&&s[i][j+1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }else if(j==w-1){
                        if(s[i-1][j]=='.'&&s[i+1][j]=='.'&&s[i][j-1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }else{
                        if(s[i-1][j]=='.'&&s[i+1][j]=='.'&&s[i][j+1]=='.'&&s[i][j-1]=='.'){
                            cout << "No" << endl;
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
}//
// Created by satos on 2024/03/20.
//
