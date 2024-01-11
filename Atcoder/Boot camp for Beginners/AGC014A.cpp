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

int fanc(int a,int b,int c){
    if(a%2==1||b%2==1||c%2==1) return 0;
    if(a==b&&b==c) return -1;
    return fanc((a+b)/2,(b+c)/2,(a+c)/2)+1;
}

int main() {
    ll a,b,c,ans=0;
    cin >> a >> b >> c;
    ans = fanc(a,b,c);
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/11.
//
