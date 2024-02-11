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
    string a,b;
    cin >> a >> b;
    if(a.size()>b.size()){
        cout << "GREATER" << endl;
        return 0;
    }else if(a.size()<b.size()){
        cout << "LESS" << endl;
        return 0;
    }else{
        rep(i,0,a.size()){
            int c = stoi(a.substr(i,1));
            int d = stoi(b.substr(i,1));
            if(c>d){
                cout << "GREATER" << endl;
                return 0;
            }else if(c<d){
                cout << "LESS" << endl;
                return 0;
            }
            else continue;
        }
    }
    cout << "EQUAL" << endl;
    return 0;
}
//
// Created by satos on 2024/02/11.
//
