#include <bits/stdc++.h>
using namespace std;

int main(){
  string str; cin >> str;
  int n = str.size();
  vector<int> l(n);
  l[0] = str[0] == 'L' ? 1 : 0;
  for (int i = 1; i < n; i++) {
    if (str[i] == 'L')
      l[i] = l[i - 1] + 1;
    else
      l[i] = l[i - 1];
  }
  int ans = 0;
  for (int i=0; i<n-2; i++){
    for (int j = i + 2; j < n; j++) {
      if (str[i] == 'M' && str[j] == 'M') {
        ans += (l[j] - l[i]);
      }
    }
  }
  cout << ans << endl;
}

