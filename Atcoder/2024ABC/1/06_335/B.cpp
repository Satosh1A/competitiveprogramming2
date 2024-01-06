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
    int a=0,b=0,c=0;
    while(a<=n){
        b=0;
        while((a+b)<=n){
            c=0;
            while((a+b+c)<=n) {
                cout << a << " " << b << " " << c << endl;
                c++;
            }
            b++;
        }
        a++;
    }
    return 0;
}
//
// Created by satos on 2024/01/06.
//
