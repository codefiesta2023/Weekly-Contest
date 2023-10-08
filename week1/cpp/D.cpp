#include "bits/stdc++.h"
using namespace std;

// Function to find and print the smallest factor greater than 1 of a number 'n'.
void solve(){
    long long n;
    cin >> n;

    for (long long i = 2; i * i < n; i++) {
        if (n % i == 0) {
            cout << n / i << "\n"; // Divide n by smallest factor i to get greatest factor of n.
            return;
        }
    }

    cout << 1 << "\n"; // If no such factor is found, print 1.
}

int main(){

    int tstCnt;
    cin >> tstCnt; // Read the number of test cases.

    while (tstCnt--){
        solve(); // Call the 'solve' function for each test case.
    }
}
