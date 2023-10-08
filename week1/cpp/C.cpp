#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime.
bool isprime(long long n) {
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false; // If 'n' is divisible by any number between 2 and sqrt(n), it's not prime.
  }
  return true; // If no divisors are found, 'n' is prime.
}

int main() {
  long long n;
  cin >> n; // Read the number 'n' from the standard input.

  if (isprime(n))
    cout << "Yes\n"; // If 'n' is prime, print "Yes".
  else
    cout << "No\n"; // If 'n' is not prime, print "No".
}
