#include <iostream>


using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    string a[H];
    for (int i=0; i<H; i++) cin >> a[i];

    for (int i = 0; i < W+2; i++) cout << "#";
    cout << endl;
    for (int i = 0; i < H; i++) {
        cout << "#";
        cout << a[i];
        cout << "#" << endl;
    }
    for (int i = 0; i < W+2; i++) cout << "#";
    cout << endl;
}