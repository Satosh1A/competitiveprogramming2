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
    int a,b;
    cin >> a >> b;
    int c;
    if(b<10) c=b+a*10;
    else if(b<100) c=b+a*100;
    else c=b+a*1000;
    for(int i=0;i<400;i++){
        if(c==i*i){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
//
// Created by satos on 2024/01/08.
//
