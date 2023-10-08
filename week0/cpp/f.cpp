/*# To check if bit at any position is 0 or 1, we can left
# shift 1 (which is 31 0's followed by 1) by that many
# positions and then bitwise & with the number that we want to check.
# For example ,
# To check if bit is set at position 2 from right in binary representation of 37,
#
# bit representation of 37 => 0000000000000000000000000100101
# 1<<2                     => 0000000000000000000000000000100
# bitwise &                => 0000000000000000000000000000100
#
# If the result is 0 then the bit at position 2 is 0 else bit at position 2 is one.
# We have to check all bit position from 31 to 0 and print postition if we get 1 at any position*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int i = 31;
  while (i >= 0) {
    if (n & (1 << i)) {
      cout << (31 - i) << " ";
    }
    i--;
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
