#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int main() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (auto &i : v)
    cin >> i;
  sort(v.begin(), v.end());
  ll ans = 1;
  for (auto i : v) {
    if (i > ans)
      break;
    else
      ans += i;
  }
  cout << ans << endl;
  return 0;
}
