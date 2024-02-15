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
unordered_map<ll,ll> memo;

int main(){
    int n;
    set<string> s;
    cin >> n;
    string a;
    cin >> a;
    s.insert(a);
    rep(i,1,n){
        string b;
        cin >> b;
        s.insert(b);
        if(b[0]!=a[a.size()-1]){
            cout << "No" << endl;
            return 0;
        }
        a = b;
    }
    if(s.size()<n){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}
//
// Created by satos on 2024/02/11.
//
