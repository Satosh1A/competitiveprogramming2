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
unordered_map<ll,ll> memo;

int main(){
    int n,m;
    cin >> n >> m;
    V a(n+1,0);
    int ans1=0,ans2=0;
    V p(m+1);
    vector<string> s(m);
    rep(i,0,m){
        cin >> p[i] >> s[i];
        if(s[i]=="AC"){
            if(a[p[i]]==0) {
                ans1++;
                a[p[i]]++;
            }else{
                a[p[i]]++;
            }
        }else{
            if(a[p[i]]==0){
                ans2++;
            }
        }
    }
    for(int i=m-1;i>=0;i--){
        if(s[i]=="WA"&&a[p[i]]==0){
            ans2--;
        }
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
//
// Created by satos on 2024/02/14.
//
