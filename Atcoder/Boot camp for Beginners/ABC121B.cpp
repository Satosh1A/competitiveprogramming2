#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<m;i++) cin >> b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a.at(i).at(j);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int box=c;
        for(int j=0;j<m;j++){
            box+=a[i][j]*b[j];
        }
        if(box>0) ans++;
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/05.
//
