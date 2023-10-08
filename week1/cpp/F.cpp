#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main() {
  int t;
  cin >> t; // Read the number of test cases.
  bool sieve[MAX]; // Create an array to represent the sieve of Eratosthenes.
  
  // Initialize the sieve array, assuming all numbers are prime initially.
  for (int i = 0; i < MAX; i++)
    sieve[i] = true;
  
  // Implement the Sieve of Eratosthenes algorithm to mark non-prime numbers.
  for (int i = 2; i * i <= MAX; i++) {
    if (sieve[i] == true) {
      for (int j = i * i; j <= MAX; j += i)
        sieve[j] = false;
    }
  }
  
  while (t--) {
    int l, r;
    cin >> l >> r; // Read the range [l, r] for the current test case.
    
    int count = 0; // Initialize a count variable to count twin prime pairs.
    vector<pair<int, int>> ans; // Initialize a vector to store twin prime pairs.
    
    // Iterate through numbers in the range [l, r-2] to find twin prime pairs.
    for (int i = l; i < r - 1; i++) {
      if (sieve[i] == true && sieve[i + 2] == true) {
        ans.push_back({i, i + 2}); // Add the twin prime pair to the vector.
        count++;
      }
    }
    
    // Check if twin prime pairs were found or not and print the result accordingly.
    if (!count)
      cout << "No\n";
    else {
      cout << "Yes\n";
      for (auto i : ans) {
        cout << i.first << " " << i.second << endl; // Print the twin prime pairs.
      }
    }
  }
}

