#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
/* #define int long long */

int main() {
  string s;
  cin >> s;
  char cur = s[0];
  int count = 1, max = 0;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == cur)
      count++;
    else {
      cur = s[i];
      max = (max > count) ? max : count;
      count = 1;
    }
  }
  cout << ((max > count) ? max : count);
  return 0;
}
