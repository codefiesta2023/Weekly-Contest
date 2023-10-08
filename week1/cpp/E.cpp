#include "bits/stdc++.h"
using namespace std;

// Define a function to handle each test case.
void solve(){

    long long n; // Declare a variable 'n' to store the input number.
    cin >> n;     // Read the input number from the standard input.
    // For n > 3,
    // If n is odd, n-1 is not prime as only 2 is even prime.
    // so we can represent n as n-1 + 1
    // If n is even, n is not prime as only 2 is even prime.
    // so we can represent n as n + 0
    // So we can represent every number as sum of non negative non prime number except 3.
    if (n == 3)
        cout << "No\n"; // If 'n' is 3, print "No" to indicate it's not what we're looking for.
    else
        cout << "Yes\n"; // If 'n' is not 3, print "Yes" to indicate it meets the condition.
}

int main(){

    int tstCnt; // Declare a variable 'tstCnt' to store the number of test cases.

    cin >> tstCnt; // Read the number of test cases from the standard input.

    // Loop through each test case.
    while (tstCnt--){

        solve(); // Call the 'solve' function to handle each test case.

    }
}
