#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long sum = 0;
  for (auto i : arr)
    sum += i;
  long long max_allowed = 1;
  max_allowed = max_allowed << 31;
  cout << max_allowed << endl;
  if (sum < max_allowed)
    cout << "int" << endl;
  else
    cout << "long long" << endl;
  return 0;
}
