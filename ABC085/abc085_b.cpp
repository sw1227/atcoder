#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i=0; i<N; i++) cin >> d[i];

    sort(d.begin(), d.end());

    int res = 0;
    int prev = -1;
    for (int i=0; i<N; i++) {
        if (d[i] > prev) res++;
        prev = d[i];
    }
    cout << res << endl;
}