#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  stack<char> st;
  int i = 0;
  int n = s.size();
  while (i < n / 2) {
    st.push(s[i]);
    i++;
  }
  if (n % 2 == 1)
    i++;
  while (i < n) {
    if (st.top() != s[i]) {
      cout << 0 << endl;
      return 0;
    }
    st.pop();
    i++;
  }
  cout << 1 << endl;
  return 0;
}