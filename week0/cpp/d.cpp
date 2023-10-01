#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i][j] != arr[j][i])
        count++;
    }
  }
  if (count == 0)
    cout << "YES\n";
  else {
    cout << "NO\n";
    cout << count << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
