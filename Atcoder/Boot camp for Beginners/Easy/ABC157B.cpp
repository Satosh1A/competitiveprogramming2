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

int main() {
    vector<int> a(9);
    for(int i=0;i<9;i++) cin >> a[i];
    int n;
    cin >> n;
    vector<int> b(9,0);
    for(int i=0;i<n;i++){
        int box;
        cin >> box;
        for(int j=0;j<9;j++){
            if(box==a[j]) b[j]=1;
        }
    }
    if(b[0]==1&&b[1]==1&&b[2]==1) cout << "Yes" << endl;
    else if(b[3]==1&&b[4]==1&&b[5]==1) cout << "Yes" << endl;
    else if(b[6]==1&&b[7]==1&&b[8]==1) cout << "Yes" << endl;
    else if(b[0]==1&&b[3]==1&&b[6]==1) cout << "Yes" << endl;
    else if(b[1]==1&&b[4]==1&&b[7]==1) cout << "Yes" << endl;
    else if(b[2]==1&&b[5]==1&&b[8]==1) cout << "Yes" << endl;
    else if(b[0]==1&&b[4]==1&&b[8]==1) cout << "Yes" << endl;
    else if(b[2]==1&&b[4]==1&&b[6]==1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
//
// Created by satos on 2024/01/07.
//
