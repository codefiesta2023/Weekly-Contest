#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long s;
    while (cin >> n >> s) {
        vector<long long> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int l = 0;
        long long accSum = 0, res = 0;
        for (int r = 0; r < n; ++r) {
            accSum += arr[r];
            while (accSum > s) {
                accSum -= arr[l++];
            }
            res += (r - l + 1);
        }
        cout << res << endl;
    }
    return 0;
}