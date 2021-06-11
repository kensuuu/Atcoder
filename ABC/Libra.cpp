#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    int R, L;
    cin >> A >> B >> C >> D;
    L = A + B;
    R = C + D;

    if (L > R) {
        cout << "Left" << endl;
    } else if (L < R) {
        cout << "Right" << endl;
    } else {
        cout << "Balanced" << endl;
    }

    return 0;
}