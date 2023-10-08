#include <bits/stdc++.h>  // Include necessary header files.
using namespace std;

void solve() {
  int n;
  cin >> n;  // Read an integer n from the standard input.

  // Loop from 1 to n (inclusive).
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0)  // If i is divisible by 3 without a remainder.
      cout << "Fizz";  // Output "Fizz".

    if (i % 5 == 0)  // If i is divisible by 5 without a remainder.
      cout << "Buzz";  // Output "Buzz".

    if (i % 7 == 0)  // If i is divisible by 7 without a remainder.
      cout << "Bazz";  // Output "Bazz".

    if (i % 3 && i % 5 && i % 7)  // If i is not divisible by 3, 5 and 7.
      cout << i;  // Output the value of i.

    cout << endl;  // Move to the next line after processing each number.
  }
}

int main() {
  int t;
  cin >> t;  // Read the number of test cases from the standard input.

  // Loop through all the test cases.
  while (t--) {
    solve();  // Call the solve() function for each test case.
  }

  return 0;  // Indicate successful completion of the program.
}
