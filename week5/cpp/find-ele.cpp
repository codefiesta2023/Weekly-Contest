//https://codeforces.com/edu/course/2/lesson/6 for explanations
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int k;
  cin >> k;
  int l = 0;
  int r = n - 1;
  int mid;
  while (l <= r) {
    mid = (l + r) / 2;
    if (v[mid] == k)
      break;
    else if (v[mid] < k)
      l = mid + 1;
    else
      r = mid - 1;
  }
  if (v[mid] == k)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}
