///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std;     // Use the standard namespace

void solve() {

  long long n, m;
  cin >> n >> m;
  long long a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 1; i < n; i++)
    a[i] += a[i - 1];

  while (m--) {

    long long x;
    cin >> x;

    cout << ((lower_bound(a, a + n, x) - a) + 1) << " ";
  }

  cout << "\n";
}

int main() {

  int tstCnt; // Declare an integer variable for the number of test cases

  cin >> tstCnt; // Read the number of test cases from the input

  while (tstCnt--) { // Loop for each test case

    solve(); // Call the solve function
  }

  return 0;
}
