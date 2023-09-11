#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(100%i==0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
//
// Created by satos on 2023/09/07.
//
