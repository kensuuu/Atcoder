#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 1000;
    int b = n % 1000 / 100;
    int c = n % 100 / 10;
    int d = n % 10;

    if (a == b && b == c) {
        cout << "Yes" << endl;
    } else if (b == c && c == d) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}