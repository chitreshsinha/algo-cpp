#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if(a==b) {
		return a;
	} 

	if(a>b) {
		return gcd(b, a-b);
	}
	return gcd(b-a, a);
}



int main() {
	int arr[] = {2, 4, 6, 8};

	int lcm = arr[0];
	int gcdv = arr[0];
	for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++) {
		cout << lcm << " " << gcdv << endl;
		gcdv = gcd(lcm, arr[i]);
		lcm = (lcm*arr[i])/gcdv;
	}
	cout << "lcm: " << lcm << endl;
	return 0;
}