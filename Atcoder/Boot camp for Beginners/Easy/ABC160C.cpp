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
    int k,n;
    cin >> k >> n;
    vector<int> a(n+2,0);
    for(int i=1;i<=n;i++) cin >> a.at(i);
    a.at(n+1) = k;
    int except = a[1];
    for(int i=1;i<n+1;i++){
        except = max(except,a[i]-a[i-1]);
    }
    except = max(except,(k-a[n])+a[1]);
    cout << k-except << endl;
    return 0;
}
//
// Created by satos on 2024/01/10.
//
