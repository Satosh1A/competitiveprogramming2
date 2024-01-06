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
    int n,q;
    cin >> n >> q;
    deque<int> a(n),b(n,0);
    for(int i=0;i<n;i++) a.at(i)=i+1;
    for(int i=0;i<q;i++){
        int c;
        cin >> c;
        if(c==1){
            char d;
            cin >> d;
            if(d=='R'){
                a.push_front(a[0]+1);
                b.push_front(b[0]);
            }else if(d=='L'){
                a.push_front(a[0]-1);
                b.push_front(b[0]);
            }else if(d=='U'){
                a.push_front(a[0]);
                b.push_front(b[0]+1);
            }else{
                a.push_front(a[0]);
                b.push_front(b[0]-1);
            }
            a.pop_back();
            b.pop_back();
        }
        else{
            int d;
            cin >> d;
            cout << a[d-1] << " " << b[d-1] << endl;
        }
    }
    return 0;
}
//
// Created by satos on 2024/01/06.
//
