#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int i = 31;
  while (i >= 0) {
    if (n & (1 << i)) {
      cout << (31 - i) << " ";
    }
    i--;
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
