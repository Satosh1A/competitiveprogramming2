#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    vector<int> a(n);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i!=j&&j!=k&&i!=k&&a[i]+a[j]+a[k]==1000){
                    flag=true;
                }
            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
//
// Created by satos on 2023/09/07.
//
