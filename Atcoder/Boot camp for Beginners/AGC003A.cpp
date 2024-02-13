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
    string s;
    cin >> s;
    int n=0,w=0,so=0,e=0;
    rep(i,0,s.size()){
        if(s[i]=='N') n++;
        else if(s[i]=='W') w++;
        else if(s[i]=='S') so++;
        else e++;
    }
    if(s.size()>1){
        if((n>0&&so>0)||(n==0&&so==0)){
            if((w>0&&e>0)||(w==0&&e==0)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }
    return 0;
}
//
// Created by satos on 2024/02/13.
//
