#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  stack<int> s;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    while (!s.empty() && s.top() > v[i])
      s.pop();
    ans[i] = s.empty() ? -1 : s.top();
    s.push(v[i]);
  }
  for (auto i : ans)
    cout << i << " ";
  cout << endl;

  return 0;
}