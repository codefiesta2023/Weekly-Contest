#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  long long sum = n * (n + 1) / 2;
  if (sum % 2 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
