#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <vector>
#include <deque>

int main() {
    int n,m,x;
    cin >> n >> m >> x;
    int a[110];
    for(int i=0;i<m;i++) cin >> a[i];
    int j=0,ans1=0,ans2=0;
    for(int i=0;i<n;i++){
        if(i==a[j]){
            if(a[j]<x) ans1++;
            else ans2++;
            j++;
        }
    }
    cout << min(ans1,ans2) << endl;
    return 0;
}
//
// Created by satos on 2024/01/13.
//
