#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; i++) cin >> h[i];

    // まずはminで全体をやればいい
    // 独立した山のそれぞれについて同じことをする
    // 愚直にやっても100 x 100
    int res = 0;
    for (int i = 0; i < 100; i++) {
        bool erasing = false;
        bool finished = true;
        for (int j = 0; j < N; j++) {
            if (h[j] > 0) {
                erasing = true;
                finished = false;
                h[j]--;
                if (j == N - 1) {
                    res++;
                    break;
                }
            } else {
                if (erasing) {
                    erasing = false;
                    res++;
                }
            }
        }
        if (finished) break;
    }

    cout << res << endl;
}