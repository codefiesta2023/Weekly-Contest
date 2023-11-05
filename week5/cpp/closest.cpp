///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int k;
  cin >> k;
  // maintain invariants v[l]<=k and v[r]>k
  int l = -1;
  int r = n;
  int mid;
  while (l + 1 < r) {
    mid = (l + r) / 2;
    if (v[mid] <= k)
      l = mid;
    else
      r = mid;
  }
  // invariants are still maintained
  if (l == -1)
    cout << v[0]; // k not in array and no elements less than or equal to k
  else if (r == n)
    cout << v[n - 1]; // k not in array and all elements less than k
  else if (abs(v[l] - k) > abs(v[r] - k))
    cout << v[r]; // v[l]<=k and v[r]>k check which is closest to k
  else
    cout << v[l];

  return 0;
}
