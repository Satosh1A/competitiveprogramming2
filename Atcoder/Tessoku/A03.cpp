#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n, k, flag=0;
    cin >> n >> k;
    vector<int> p(n), q(n);
    for(int i=0;i<n;i++) cin >> p[i];
    for(int i=0;i<n;i++) cin >> q[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[i]+q[j]==k) flag=1;
        }
    }
    if(flag==0) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
//
// Created by satos on 2023/09/12.
//
