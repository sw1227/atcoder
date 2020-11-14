#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct point {
    int x;
    int y;
};

int dist(point p1, point p2) {
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

int INF = 999999999;

int main() {
    int N, M;
    cin >> N >> M;
    vector<point> students(N);
    vector<point> checkpoints(M);
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        students[i] = point({a, b});
    }
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        checkpoints[i] = point({a, b});
    }

    for (int i = 0; i < N; i++) {
        // students[i]からもっとも近いチェックポイントのidx+1をcoutする
        int min_dist = INF;
        int nearest;
        for (int j = 0; j < M; j++) {
            int d = dist(students[i], checkpoints[j]);
            if (d < min_dist) {
                min_dist = d;
                nearest = j + 1;
            }
        }
        cout << nearest << endl;
    }
}