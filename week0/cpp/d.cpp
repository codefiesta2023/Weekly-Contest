/*# To check if matrix is symmetric, we need to check if elements at
# index i,j is same as element at index j,i 
# if not increment the counter.

# When in a for loop i ranges from 0 to some n and within it 
# in another for loop j ranges from i to some m,
# arr[i][j] traverses the upper triangular matrix 
# and arr[j][i] traverses lower triangular matrix,
# if we imagine the 2d array to be a matrix.

# When we range j from i+1 to n, we traverse upper triangular matrix
# without diagonal elements.In this case diagonal elements
# do not matter so both traversal works*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i][j] != arr[j][i])
        count++;
    }
  }
  if (count == 0)
    cout << "YES\n";
  else {
    cout << "NO\n";
    cout << count << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
