#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int flag = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(x==a) flag=1;
    }
    if(flag==1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
//
// Created by satos on 2023/09/12.
//
