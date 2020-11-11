#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, pair<int, int>>> p(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        p[i] = make_pair(i, make_pair(x, y));
    }

    double sum = 0;
    int n = 0;
    // next_permutationだと重複が削除されてしまう
    do {
        double dist = 0;
        for (int i = 0; i < N-1; i++) {
            dist += hypot(p[i].second.first - p[i+1].second.first, p[i].second.second - p[i+1].second.second);
        }
        sum += dist;
        n++;
    } while (next_permutation(p.begin(), p.end()));
    cout << fixed << setprecision(7) << sum / n << endl;
}