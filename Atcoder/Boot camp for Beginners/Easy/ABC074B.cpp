#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

int main() {
    int n,k,ans=0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int box;
        cin >> box;
        if(k>2*box) ans+=2*box;
        else ans+=2*(k-box);
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/09.
//
