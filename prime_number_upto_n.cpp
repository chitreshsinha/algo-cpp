// Implementation of Sieve of Eratosthenes

#include <iostream>
#include <vector>

using namespace std;

int main () {
	int n;
	cout << "Enter n:";
	cin >> n;

	vector <int> primes(n+1);
	for (int i=0; i<n+1; i++) {
		primes[i] = 1;
	}
	primes[0] = 0;
	primes[1] = 0;

	for(int i=2; i<n+1; i++) {
		for (int j=2; i*j<n+1; j++) {
			if (primes[i*j]==1) {
				primes[i*j] = 0;
			}
		}
	}

	for (int i=0; i<n+1; i++) {
		if (primes[i] == 1) {
			cout << i << " ";
		}
	}
	cout << endl;
}