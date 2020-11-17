#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

///////////////////////
// abc063_c = arc075_a
///////////////////////

int main() {
    int N;
    cin >> N;
    vector<int> s(N);
    for (int i = 0; i < N; i++) cin >> s[i];

    // 和が10の倍数でなければそのまま
    // 10の倍数なら, 10の倍数でない最小の要素を引きたい。
    // 10の倍数は何個足しても10の倍数なので、それをいくつ引いても無駄なので、これでいいはず
    sort(s.begin(), s.end());

    int sum = 0;
    for (int i = 0; i < N; i++) sum += s[i];
    if (sum % 10 != 0) {
        cout << sum << endl;
    } else {
        int max_score = 0;
        for (int i = 0; i < N; i++) {
            if (s[i] % 10 != 0) {
                max_score = sum - s[i];
                break;
            }
        }
        cout << max_score << endl;
    }
}