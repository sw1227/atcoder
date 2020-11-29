#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    // 両方偶数か、片方が4の倍数か
    // 奇数は必ず離し、隣に4の倍数を置く必要がある。4の倍数をできるだけ効率良く奥には奇数の間に挟む
    // odd 4 odd 4 odd ... 4 odd 4 even ... even  / odd 4 odd .. odd 4 odd
    // 4の倍数は基本的に奇数の数だけ必要だが、Nが奇数で交互の場合のみoddがちょい多くてOK
    // 部分問題でも行けそうだが
    int n_odd = 0;
    int n_4 = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] % 2 == 1) n_odd++;
        if (a[i] % 4 == 0) n_4++;
    }

    // 4の倍数が奇数以上ならOK
    if (n_4 >= n_odd) {
        cout << "Yes" << endl;
    } else if ((n_odd + n_4 == N) && (n_odd == n_4 + 1)) {
        // 4の場合が奇数よりも少なくてOKなのは、両端をoddにして挟める場合だけ
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}