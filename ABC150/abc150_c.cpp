#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


bool equal_vec(vector<int> a, vector<int> b) {
    bool flag = true;
    for (int i=0; i<a.size(); i++) {
        if (a[i] != b[i]) flag = false;
    }
    return flag;
}

int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> Q[i];

    vector<int> v(N);
    for (int i = 0; i < N; i++) v[i] = i+1;
    int count = 0;
    int pi, qi;
    do {
        if (equal_vec(v, P)) pi = count;
        if (equal_vec(v, Q)) qi = count;
        count++;
    } while (next_permutation(v.begin(), v.end()));

    cout << abs(pi - qi) << endl;
}