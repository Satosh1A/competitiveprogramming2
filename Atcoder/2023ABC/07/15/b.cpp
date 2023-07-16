#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkSubsequence(const std::vector<int>& sequenceA, const std::vector<int>& sequenceB) {
    auto it = sequenceA.begin();
    for (int num : sequenceB) {
        it = std::find(it, sequenceA.end(), num);
        if (it == sequenceA.end()) {
            return false; // 数列Aに数列Bの要素が見つからない
        }
        ++it;
    }
    return true; // 数列Aに数列Bのすべての要素が含まれている
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> p(n),c(n);
    vector<vector<int>> f(n);
    for(int i=0;i<n;i++){
        cin >> p[i] >> c[i];
        for(int j=0;j<c[i];j++){
            int temp;
            cin >> temp;
            f[i].push_back(temp);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[i]>=p[j]&&i!=j){
                if(c[i]<=c[j]){
                    if(checkSubsequence(f[j],f[i])&&(p[i]!=p[j]||c[i]!=c[j])){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}//
// Created by satos on 2023/07/16.
//
