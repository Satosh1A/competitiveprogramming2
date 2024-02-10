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
    string w;
    cin >> w;
    V box(26,0);
    rep(i,0,w.size()){
        box[w[i]-'a'+1]++;
    }
    bool ans = true;
    rep(i,0,26){
        if(box[i]%2==1) ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
//
// Created by satos on 2024/02/10.
//
