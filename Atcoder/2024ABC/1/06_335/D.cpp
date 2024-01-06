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

void fillSpiral(std::vector<std::vector<int>>& matrix, int matrixSize) {
    int top = 0, bottom = matrixSize - 1, left = 0, right = matrixSize - 1;
    int value = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = value++;
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = value++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = value++;
            }
            left++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    fillSpiral(a, n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==(n-1)/2&&j==(n-1)/2) cout << 'T' << ' ';
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
//
// Created by satos on 2024/01/06.
//
