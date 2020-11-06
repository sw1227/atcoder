#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int is_dist_int(vector<int> v1, vector<int> v2) {
    int squared_dist = 0;
    for (int i = 0; i < v1.size(); i++) {
        squared_dist += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    int s = (int)sqrt((float)squared_dist);
    return s*s == squared_dist;
};

int main() {
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) cin >> X[i][j];
    }

    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (is_dist_int(X[i], X[j])) res++;
        }
    }
    cout << res << endl;
}