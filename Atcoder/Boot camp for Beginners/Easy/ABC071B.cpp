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
    string s;
    cin >> s;
    set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    for(int i=0;i<26;i++){
        if(st.find(char('a'+i))==st.end()){
            cout << char('a'+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
//
// Created by satos on 2024/01/19.
//
