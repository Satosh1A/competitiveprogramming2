#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
#include <unordered_map>
using namespace std;
using ll = long long;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define chmin(a,b) a=min(a,b)
#define chmax(a,b) a=max(a,b)
#define all(obj) (obj).begin(),(obj).end()
#define P pair<int,int>
#define V vector<int>
#define M map<int,int>
#define S set<int>
#define PQ priority_queue<int>
#define PQG priority_queue<int,V,greater<int>>
#define pb(a) push_back(a)
#define mp make_pair

int main(){
    int n,m;
    cin >> n >> m;
    V ans(m,0);
    int box = 0;
    rep(i,0,n){
        int a;
        cin >> a;
        rep(j,0,a){
            int b;
            cin >> b;
            ans[b-1]++;
        }
    }
    rep(i,0,m){
        if(ans[i]==n) box++;
    }
    cout << box << endl;
    return 0;
}
//
// Created by satos on 2024/02/10.
//
