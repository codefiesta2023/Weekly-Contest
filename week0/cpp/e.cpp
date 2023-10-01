/*# In binary representation of a number, 1 represents power of 2 which are not zero
# for example 4 => 100 => 1*2^2 + 0*2^1 + 0*2^0.
# To represnt a number as sum of powers of two, we can just take terms which are not zero in above
# example, i.e terms corresponding to 1's in binary representation.
# Therefore to get minimum no of powers of two whoose sum is equal to number, we can just count the
# number of 1's in binary representation. The splitting does not matter.
# The only number which cannot be represented as sum of powers of two is number which do not
# contain any 1's in binary representation, i.e 0. This case needs to be handled seperately. */


#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, cnt = 0;
  cin >> n >> m;

  int tm = m;
  while (tm--) {
    string s;
    cin >> s;
    for (int i = 0; i < (n / m); i++) {
      if (s[i] == '1')
        cnt++;
    }
  }

  if (cnt)
    cout << cnt << endl;
  else
    cout << -1 << endl;
  ;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
