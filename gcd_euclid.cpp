#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main () {
	int n, m, temp;
	cout << "Enter two numbers: ";
	cin >> n;
	cin >> m;


	while(n%m != 0) {
		temp = n;
		n = m;
		m = temp%m;
	}

	cout << m << endl;

	return 0;
}