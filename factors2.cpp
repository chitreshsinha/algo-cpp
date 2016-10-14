#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main () {
	int n, i;
	vector <int> v;
	cout << "Enter the number: ";
	cin >> n;
	v.push_back(1);
	v.push_back(n);

	for (i=2; i<=sqrt(n); i++) {
		if (n%i == 0) {
			v.push_back(i);
			v.push_back(n/i);
		}
	}

	for (i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}