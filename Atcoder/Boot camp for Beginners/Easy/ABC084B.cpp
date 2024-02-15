#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
using namespace std;
using ll = long long;

int a,b;string s;

int check(char c){return '0'<=c and c<='9';}
string solve(){
    for(int i=0;i<a;i++) if(!check(s[i])) return "No";
    if(s[a]!='-') return "No";
    for(int i=a+1;i<a+b+1;i++) if(!check(s[i])) return "No";
    return "Yes";
}
int main() {
    cin >> a >> b >> s;
    cout << solve() << endl;
    return 0;
}
//
// Created by satos on 2024/01/19.
//
