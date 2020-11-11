#include <iostream>
#include <vector>
// #include <set>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    vector<bool> visits(N);
    for (int i = 0; i < N; i++) visits[i] = false;

    // set<int> visits;
    int button = 1;
    visits[button - 1] = true;
    int res = 0;
    for (int i = 0; i < N; i++) {
        // push!
        res++;
        button = a[button-1];
        if (button == 2) {
            break;
        }
        if (visits[button - 1]) {
            res = -1;
            break;
        }
        visits[button - 1] = true;
    }
    cout << res << endl;
}