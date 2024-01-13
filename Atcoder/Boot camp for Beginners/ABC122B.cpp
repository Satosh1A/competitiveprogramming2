#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <vector>
#include <deque>

int main() {
    string s;
    cin >> s;
    int ans = 0, now = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='T'||s[i]=='G'||s[i]=='C'){
            now++;
            ans = max(ans,now);
        }else{
            now = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/13.
//
