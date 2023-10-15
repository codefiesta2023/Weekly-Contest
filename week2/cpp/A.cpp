#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;
  int zcount;
  for (int i = 0; i < n; i++) {
    int ele;
    cin >> ele;
    if (ele == 0)
      zcount++;
  }
  cout << zcount << endl;
  return 0;
}
