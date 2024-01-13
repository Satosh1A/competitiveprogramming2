#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <vector>
#include <deque>

int main() {
    int n;
    int a[101010];
    cin >> n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin >> a[i];
        v.push_back({a[i],i+1});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) cout << v[i].second << endl;
    return 0;
}
//
// Created by satos on 2024/01/13.
//
