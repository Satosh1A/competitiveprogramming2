#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,p,q,min=1000000;
    cin >> n >> p >> q;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp<min) min =temp;
    }
    if(p<q+min){
        cout << p << endl;
    }else{
        cout << q+min << endl;
    }
    return 0;
}
