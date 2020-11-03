#include <iostream>
#include <vector>

using namespace std;

// dtステップでdx, dyだけ右上に移動するとすると
// 0 <= l, r, u, d <= dt
// l + r + u + d = dt
// r - l = dx => r = l + dx
// u - d = dy => u = d + dy
// l + l+dx + d+dy + d = dt => 2l + 2d = dt - dx - dy
// => d = (dt - dx - dy - 2l) / 2
bool feasible_step(int dt, int dx, int dy) {
    for (int l=0; l<= dt; l++) {
        int d2 = dt - dx - dy - 2*l;
        if (d2 % 2 == 1) return false;
        int d = d2 / 2;
        int r = l + dx;
        int u = d + dy;
        if ((0 <= d) && (0 <= r) && (0 <= u) &&
            (d <= dt) && (r <= dt) && (u <= dt)) {
                return true;
            }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    vector<int> t(N+1);
    vector<int> x(N+1);
    vector<int> y(N+1);
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i=1; i<=N; i++) cin >> t[i] >> x[i] >> y[i];

    bool ok = true;
    for (int i=0; i<N; i++) {
        int dt = t[i+1] - t[i];
        int dx = x[i+1] - x[i];
        int dy = y[i+1] - y[i];
        // cout << "Step " << i << ": " << dt << " " << dx << " " << dy << endl;
        if (!feasible_step(dt, dx, dy)) ok = false;
    }

    if (ok) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    cout << endl;
}