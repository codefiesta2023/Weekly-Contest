#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, cnt = 0;
  cin >> n >> m;

  int tm = m;
  while (tm--) {
    string s;
    cin >> s;
    for (int i = 0; i < (n / m); i++) {
      if (s[i] == '1')
        cnt++;
    }
  }

  if (cnt)
    cout << cnt << endl;
  else
    cout << -1 << endl;
  ;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
