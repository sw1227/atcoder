#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <queue>

using namespace std;
// using Graph = vector<pair<char, vector<int>>>;

int INF = 99999999;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    vector<vector<int>> dist(H, vector<char>(W, INF));
    // start, goal position
    int sh, sw;
    int gh, gw;
    // teleport position
    unordered_map<char, vector<pair<int, int>>> teleports;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            cin >> c;
            grid[i][j] = c;
            if (c == 'S') {
                sh = i;
                sw = j;
            }
            if (c == 'G') {
                gh = i;
                gw = j;
            }
            if ((c != 'S') && (c != 'G') && (c != '.') && (c != '#')) {
                // teleport
                if (teleports.find(c) == teleports.end()) {
                    // add new
                    teleports[c] = {make_pair(i, j)};
                } else {
                    teleports[c].push_back(make_pair(i, j));
                }
            }
        }
    }

    // // 2000 * 2000 = 4 * 10^6
    // // BFSで行けば良さそう

    // Check teleports: OK
    // for (auto it = teleports.begin(); it != teleports.end(); it++) {
    //     cout << it->first << endl;
    //     for (auto p: it->second) {
    //         cout << p.first << ", " << p.second << endl;
    //     }
    // }

    // Start position
    int h = sh;
    int w = sw;

    queue<pair<int, int>> que;
    que.push(make_pair(h, w));
    dist[h][w] = 0;

    while (!que.empty()) {
        pair<int, int> p = que.front();
        que.pop();

        // 隣を調べる
        // upper
        if (p.first > 0) {
            char u = grid[p.first - 1][p.second];
            if (u == '.') {
                dist[p.first - 1][p.second] = dist[p.first][p.second] + 1;
                que.push(make_pair(p.first-1, p.second));
            }
            if (u == '')
        }
        // left
        if (j > 0) G[idx].second.push_back(idx - 1);
        // right
        if (j < W-1) G[idx].second.push_back(idx + 1);
        // down
        if (i < H-1) G[idx].second.push_back(idx + W);
    }


    // Graph G(H * W); // 0, 1, ..., H*W-1
    // for (int i = 0; i < H; i++) {
    //     for (int j = 0; j < W; j++) {
    //         int idx = i * W + j;
    //         char c;
    //         cin >> c;
    //         G[idx] = make_pair(c, vector<int> {});

    //         // upper
    //         if (i > 0) G[idx].second.push_back(idx - W);
    //         // left
    //         if (j > 0) G[idx].second.push_back(idx - 1);
    //         // right
    //         if (j < W-1) G[idx].second.push_back(idx + 1);
    //         // down
    //         if (i < H-1) G[idx].second.push_back(idx + W);
    //     }
    // }
}