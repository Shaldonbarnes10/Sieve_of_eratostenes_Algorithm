#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;

    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
    }
    cout << "Prime numbers up to " << n << " are:\n";
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
