#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> A(3, vector<int>(3));
    for (int i=0; i<3; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];
    int N;
    cin >> N;
    vector<int> b(N);
    for (int i=0; i<N; i++) cin >> b[i];

    bool bingo = false;

    vector<vector<bool>> table(3, vector<bool>(3, false));
    for (int i=0; i<3; i++) {
        auto row = A[i];
        for (int j=0; j<3; j++) {
            auto n = row[j];
            if (find(b.begin(), b.end(), n) != b.end()) {
                table[i][j] = true;
            }
        }
    }

    for (int i=0; i<3; i++) {
        // row i
        if (table[i][0] && table[i][1] && table[i][2]) bingo = true;
        // col i
        if (table[0][i] && table[1][i] && table[2][i]) bingo = true;
    }
    // cross
    if (table[0][0] && table[1][1] && table[2][2]) bingo = true;
    if (table[0][2] && table[1][1] && table[2][0]) bingo = true;


    if (bingo) cout << "Yes";
    else cout << "No";
}