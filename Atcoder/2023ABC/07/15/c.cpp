#include <iostream>
#include <vector>
#include <algorithm>
#include<set>

using namespace std;

int main() {
    int n,box=0;
    cin >> n;
    int ans2 = n;
    set<string> ans;
    for(int i=0;i<n;i++){
        string temp;
        cin >> temp;
        string temp2=temp;
        reverse(temp.begin(),temp.end());
        if(temp==temp2&&ans.find(temp)==ans.end()) box++;
        ans.insert(temp);
        ans.insert(temp2);
    }
    cout << (ans.size()+box)/2 << endl;
    return 0;
}
//
// Created by satos on 2023/07/16.
//
