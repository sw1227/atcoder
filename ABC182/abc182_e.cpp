#include <iostream>
#include <vector>
#include <utility>
#include <set>

using namespace std;

int main() {
    int H, W, N, M;
    cin >> H >> W >> N >> M;
    vector<pair<int, int>> lights(N);
    // vector<pair<int, int>> blocks(M);
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        lights[i] = make_pair(A-1, B-1);
    }
    set<pair<int, int>> blocks;
    for (int i = 0; i < M; i++) {
        int C, D;
        cin >> C >> D;
        blocks.insert(make_pair(C-1, D-1));
        // blocks[i] = make_pair(C-1, D-1);
    }

    set<pair<int, int>> arrive;
    for (int i = 0; i < N; i++) {
        auto l = lights[i];
        arrive.insert(l);
        // Add to arrive set from lights[i] until blocked
        // down (+, 0)
        for (int j = 0; l.first + j < H; j++) {
            auto p = make_pair(l.first + j, l.second);
            bool available = (blocks.find(p) == blocks.end());
            if (available) {
                arrive.insert(p);
            } else { // not available. blocked!
                break;
            }
        }
        // up (-, 0)
        for (int j = 0; l.first - j >= 0; j++) {
            auto p = make_pair(l.first - j, l.second);
            bool available = (blocks.find(p) == blocks.end());
            if (available) {
                arrive.insert(p);
            } else { // not available. blocked!
                break;
            }
        }
        // right (0, +)
        for (int j = 0; l.second + j < W; j++) {
            auto p = make_pair(l.first, l.second + j);
            bool available = (blocks.find(p) == blocks.end());
            if (available) {
                arrive.insert(p);
            } else { // not available. blocked!
                break;
            }
        }
        // left (0, -)
        for (int j = 0; l.second - j >= 0; j++) {
            auto p = make_pair(l.first, l.second - j);
            bool available = (blocks.find(p) == blocks.end());
            if (available) {
                arrive.insert(p);
            } else { // not available. blocked!
                break;
            }
        }
    }

    cout << arrive.size() << endl;
}