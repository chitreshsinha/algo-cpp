#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) {
	vector<int>::iterator it;
	for (it=v.begin(); it<v.end(); it++) {
		cout << *it << endl;
	}
}

void swap(vector<int> &v, int i, int j) {
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

vector<int> selectionSort(vector<int>& v) {
	print(v);
	int i, j, size = v.size();

	vector<int>::iterator it;

	for (i=0; i<size; i++) {
		cout << "Once More" << endl << endl;
		for (j=0; j<size-i-1; j++) {
			cout << "Before: v[" << j << "]: " << v[j] << ", v[" << j+1 << "]: " << v[j+1] << endl;
			if (v[j] > v[j+1]) {
				swap(v, j, j+1);
				cout << "Swap: v[" << j << "]: " << v[j] << ", v[" << j+1 << "]: " << v[j+1] << endl;
			}
			cout << "After: v[" << j << "]: " << v[j] << ", v[" << j+1 << "]: " << v[j+1] << endl << endl;			
		}
	}

	return v;
}

int main () {
	int A[] = {14, 33, 27, 10, 35, 19, 42, 44};
	vector<int> v (A, A + (sizeof(A)/sizeof(int)));
	selectionSort(v);
	print (v);
	return 0;	
}