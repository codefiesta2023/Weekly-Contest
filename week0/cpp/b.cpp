#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0)
      cout << "Fizz";
    if (i % 5 == 0)
      cout << "Buzz";
    if (i % 7 == 0)
      cout << "Bazz";
    if (i % 3 && i % 5 && i % 7)
      cout << i;
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
