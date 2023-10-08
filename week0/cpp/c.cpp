#include <bits/stdc++.h>  // Include necessary header files.
using namespace std;

void solve() {
  int n;
  cin >> n;  // Read an integer n from the standard input.

  // Calculate the sum of the first n natural numbers using the formula:
  // `long long` is used to handle large values of `n` 
  //because the expression `n * (n + 1) / 2` can result in an integer overflow for large values of `n`, 
  //which can be prevented by using the `long long` data type to accommodate larger results.
  long long sum = n * (n + 1) / 2;

  // Check if the sum is even.
  // It is possible to divide the numbers from 1 to n into equal sum groups if the sum is even 
  // because even numbers can always be evenly divided into equal parts, ensuring each group has an integer sum; 
  // whereas, if the sum is odd, it cannot be divided into equal integer sum groups.
  
  if (sum % 2 == 0)
    cout << "YES\n";  // If the sum is even, output "YES".
  else
    cout << "NO\n";   // If the sum is odd, output "NO".
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
