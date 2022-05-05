#include<bits/stdc++.h>
using namespace std;
 
int main() {
    vector<vector<int>> matrix(5, vector<int>(5));
    for(int r = 0; r < matrix.size(); r++) {
        for(int c = 0; c < matrix[0].size(); c++) {
            cin >> matrix[r][c];
        }
    }
    int row = 0, col = 0;
    for(int r = 0; r < matrix.size(); r++) {
        for(int c = 0; c < matrix[0].size(); c++) {
            if(matrix[r][c] == 1) {
                col = c;
                row = r;
                break;
            }
        }
    }
 
    cout << abs(2 - row) + abs(2 - col) << "\n";
    return 0;
}
