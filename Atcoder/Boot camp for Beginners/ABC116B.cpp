#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;

#include <vector>
#include <deque>
#include <set>

int S;
//---------------------------------------------------------------------------------------------------
int main() {
    cin >> S;

    set<int> done;
    done.insert(S);
    int cur = S;

    for(int i=2;i<1010101;i++) {
        int nxt;
        if (cur % 2 == 0) nxt = cur / 2;
        else nxt = 3 * cur + 1;

        if (done.count(nxt)) {
            printf("%d\n", i);
            return 0;
        }
        done.insert(nxt);
        cur = nxt;
    }
    return 0;
}
//
// Created by satos on 2024/01/14.
//
