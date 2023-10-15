#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  int n;
  cin >> n;
  vector<ll> v(n);
  for (auto &i : v)
    cin >> i;
  ll cur = v[0];
  ll ans = 0;
  for (int i = 1; i < n; i++) {
    if (v[i] < cur) {
      ans += cur - v[i];
    } else
      cur = v[i];
  }
  cout << ans;
  return 0;
}
