#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
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
    int n;
    cin >> n;
    V a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    V b = a;
    sort(all(b));
    rep(i,0,n){
        if(b[n-2]==b[n-1]){
            cout << b[n-2] << endl;
        }else{
            if(a[i]<b[n-1]){
                cout << b[n-1] << endl;
            }else{
                cout << b[n-2] << endl;
            }
        }
    }
    return 0;
}//
// Created by satos on 2024/02/10.
//
