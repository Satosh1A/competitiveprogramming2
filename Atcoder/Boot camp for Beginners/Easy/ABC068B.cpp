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
    int n;
    cin >> n;
    int ans=1,count=0;
    for(int i=1;i<=n;i++){
        int box=0,num=i;
        while(num%2==0&&num>0){
            box++;
            num/=2;
        }
        if(box>count){
            count = box;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
//
// Created by satos on 2024/01/09.
//
