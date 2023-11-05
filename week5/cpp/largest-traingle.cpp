///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool isgood(long long mid, long long n) {
  long long t = mid * mid;
  if (n >= t)
    return true;
  else
    return false;
}

int main() {
  long long n;
  cin >> n;
  long long l = 1;
  long long r = 1e9 + 1;
  while (l + 1 < r) {
    long long mid = (l + r) / 2;
    if (isgood(mid, n))
      l = mid;
    else
      r = mid;
  }
  cout << l << endl;

  return 0;
}

// or just print floor(sqrt(n))
