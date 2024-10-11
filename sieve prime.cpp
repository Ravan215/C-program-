#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n) {
    // Create a boolean array "prime[0..n]" and initialize all entries as true
    vector<bool> prime(n + 1, true);

    // 0 and 1 are not prime numbers
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
       //      cout << "p;"<<p << endl;
        // If prime[p] is true, then it's a prime number
        if (prime[p]) {
            // Mark all multiples of p as false
            for (int i = p * p; i <= n; i += p) {
      //      cout << "p2="<<i << endl;
                prime[i] = false;
            }
        }
    }

    // Print all prime numbers
    cout << "Prime numbers up to " << n << " are: ";
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            cout << p << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;

    sieveOfEratosthenes(n);

    return 0;
}