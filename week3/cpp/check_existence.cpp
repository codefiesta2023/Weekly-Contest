#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++) {
    int ele;
    cin >> ele;
    m[ele]++;
  }
  for (int i = 0; i < k; i++) {
    int ele;
    cin >> ele;
    if (m.count(ele) == 0)
      cout << "No\n";
    else
      cout << "Yes\n";
  }
  return 0;
}
