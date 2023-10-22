#include <bits/stdc++.h>
#include <charconv>
#include <string>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  vector<int> arr(26, 0);
  for (auto i : str) {
    arr[i - 'a']++;
  }
  string ans = "";
  for (int i = 0; i < 26; i++) {
    ans += to_string(arr[i]);
  }
  cout << ans << endl;
  return 0;
}
