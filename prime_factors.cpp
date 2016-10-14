#include <iostream>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

int main () {
	int n, i, temp_n;
	vector <int> v;
	cout << "Enter a number: ";
	cin >> n;

	temp_n = n;

	for (i=2;i<=sqrt(n);i++) {
		//cout << temp_n << " " << i << endl;
		while(temp_n%i==0) {
			v.push_back(i);
			temp_n = temp_n/i;
		}
	}
	if (temp_n!=1) {
		v.push_back(temp_n);
	}

	//cout << "v" << endl;
	for (i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	set <int> s(v.begin(), v.end());

	cout << "Set size: " << s.size() << endl;
	
	set <int>::iterator it;

	for (it=s.begin();it!=s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

}