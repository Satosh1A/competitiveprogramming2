#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int64_t x;
    cin >> n >> x;

    vector<int64_t> vec(n);
    for(int i=0; i<n; i++)
        cin >> vec.at(i);

    sort(vec.begin(), vec.end());

    int64_t c=0;
    for(int i=0; i<n; i++){
        x -= vec.at(i);
        if(x>=0)
            c++;
        else
            break;
    }
    if(x>0)
        c--;

    cout << c << endl;
}
//
// Created by satos on 2024/01/15.
//
