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
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    int a1=0,b1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            if((a1+b1)<(a+b)) {
                cout << "Yes" << endl;
                a1++;
            }
            else{
                cout << "No" << endl;
            }
        }else if(s[i]=='b'){
            if((a1+b1)<(a+b)){
                if(b1<b) {
                    cout << "Yes" << endl;
                    b1++;
                }else{
                    cout << "No" << endl;
                }
            }
            else{
                cout << "No" << endl;
            }
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
//
// Created by satos on 2024/01/03.
//
