#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n+1;i++){
        double I = i;
        I = (int)(I*1.08);
        if(I==n){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}
//
// Created by satos on 2024/01/04.
//
