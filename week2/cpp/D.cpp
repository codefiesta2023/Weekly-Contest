#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = n - k; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
