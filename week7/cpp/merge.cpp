#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (auto i = 0; i < n; i++) {
        cin >> b[i];
    }
    auto i = 0, j = 0;
    while (i < n || j < n) {
        if (j == n || i < n && a[i] < b[j]) {
            cout << a[i++] << " ";
        } else {
            cout << b[j++] << " ";
        }
    }
    cout << endl;
    return 0;
}