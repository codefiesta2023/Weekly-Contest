#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;
#define ll long long

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  sort(v.begin(), v.end(), greater<int>());
  for (auto i : v)
    cout << i << " ";
  return 0;
}
