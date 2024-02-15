#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
using namespace std;
using ll = long long;

int main() {
    int A,B,M;
    cin >> A >> B >> M;
    int a[101010],b[101010];
    for(int i=0;i<A;i++) cin >> a[i];
    for(int i=0;i<B;i++) cin >> b[i];
    int xyc[101010][3];
    for(int i=0;i<M;i++) cin >> xyc[i][0] >> xyc[i][1] >> xyc[i][2];
    int ans = 202020;
    for(int i=0;i<M;i++){
        ans = min(ans,a[xyc[i][0]-1]+b[xyc[i][1]-1]-xyc[i][2]);
    }
    sort(a,a+A);
    sort(b,b+B);
    ans = min(ans,a[0]+b[0]);
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/17.
//
