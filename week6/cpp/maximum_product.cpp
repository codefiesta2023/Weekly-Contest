/* https://www.geeksforgeeks.org/breaking-integer-to-get-maximum-product/ */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << n - 1 << endl;
    } else {
        int res = 1;

        while (n > 4) {
            n -= 3;
            res *= 3;
        }

        cout << n * res << endl;
    }

    return 0;
}
