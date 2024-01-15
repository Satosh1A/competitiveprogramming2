#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
using namespace std;
using ll = long long;

int main() {
    int n,x;
    cin >> n >> x;
    int a[110];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int count = 0,ans = 0;
    for(int i=0;i<n;i++){
        count+=a[i];
        if(count<=x){
            ans++;
        }
    }
    if(ans==n&&count!=x) ans--;
    cout << ans << endl;
    return 0;
}
