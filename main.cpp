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

void _main(){
    V c(9);
    rep(i,0,9){
        cin >> c[i];
    }
    if((c[3]-c[0])==(c[4]-c[1])&&(c[5]-c[2])==(c[4]-c[1])){
        if((c[3]-c[6])==(c[4]-c[7])&&(c[5]-c[8])==(c[4]-c[7])){
            if((c[1]-c[0])==(c[4]-c[3])&&(c[7]-c[6])==(c[4]-c[3])){
                if((c[2]-c[1])==(c[5]-c[4])&&(c[8]-c[7])==(c[5]-c[4])){
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "No" << endl;
    return;
}