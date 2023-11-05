///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

bool isgood(long long mid, long long k, vector<int> &v) {
  long long segments = 1;
  long long currentsum = 0;
  for (auto i : v) {
    currentsum += i;
    if (currentsum > mid) {
      segments++;
      currentsum = i;
    }
  }
  return segments <= k;
}

int main() {
  long long n, k;
  cin >> n >> k;
  vector<int> v(n);
  long long l, r;
  l = 0;
  r = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    l = l > v[i] ? l : v[i];
    r += v[i];
  }

  while (l < r) {
    long long mid = (l + r) / 2;
    if (isgood(mid, k, v))
      r = mid;
    else
      l = mid + 1;
  }
  cout << r << endl;

  return 0;
}
