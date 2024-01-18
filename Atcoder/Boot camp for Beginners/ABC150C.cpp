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
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++) v.push_back(i+1);
    int p[8],q[8];
    for(int i=0;i<n;i++) cin >> p[i];
    for(int i=0;i<n;i++) cin >> q[i];
    int index = 0,a=-1,b=-1;
    bool c = true;
    do{
        index++;
        c = true;
        for(int i=0;i<n;i++){
            if(p[i]!=v[i]) c = false;
        }
        if(c) a = index;
        c = true;
        for(int i=0;i<n;i++){
            if(q[i]!=v[i]) c = false;
        }
        if(c) b = index;
    }while(next_permutation(v.begin(),v.end()));
    cout << abs(a-b) << endl;
    return 0;
}
//
// Created by satos on 2024/01/18.
//
