#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if(a==b) {
		return a;
	} 

	if(a>b) {
		return gcd(a-b, b);
	}
	return gcd(a, b-a);
}

int main() {
	//int a, b;
	int arr[] = {2, 4, 6, 8};
	//cin >> a;
	//cin >> b;

	//cout << gcd(a, b) << endl;

	int final_gcd = gcd(arr[0], arr[1]);

	for(int i=2;i<sizeof(arr)/sizeof(arr[0]);i++) {
		cout << final_gcd << " " << arr[i] << endl;
		final_gcd = gcd(final_gcd, arr[i]);
	}
	cout << final_gcd << endl;
	return 0;
}