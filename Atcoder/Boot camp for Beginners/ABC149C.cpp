#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
using namespace std;
using ll = long long;

bool isprime(long long N) {
    if (N < 2) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    for(int i=x;i<1010100;i++){
        if(isprime(i)) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
//
// Created by satos on 2024/01/14.
//
