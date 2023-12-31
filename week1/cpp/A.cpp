#include <bits/stdc++.h>
#define ll long long;
using namespace std;

//You need to use long long as while calculating numbers can get greater than 10^9
//If you use, int you will get wrong answer due to overflow of integer when you multiply a by b while
//calculating LCM.

// Function to calculate the GCD (Greatest Common Divisor) of two numbers.
long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function to calculate the LCM (Least Common Multiple) of two numbers.
long long lcm(long long a, long long b){
    return (a * b) / gcd(a, b);
}

// Function to solve each test case.
void solve() {
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b) + lcm(a, b) << endl; // Calculate and print GCD + LCM.
}

int main() {
    int t;
    cin >> t; // Read the number of test cases.
    while (t--) {
        solve(); // Call the solve function for each test case.
    }
}
