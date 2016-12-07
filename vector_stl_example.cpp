#include <iostream>
#include <vector>

using namespace std;

void print(const vector <int> &V) {
	int v_size = V.size();
	int i;

	for(i=0;i<v_size;i++) {
		cout << V[i] << " ";
	}
	cout << endl;
}

void print_using_iterator(vector<int> &V) {
	int v_size=V.size();
	vector <int>::iterator it;
	for(it = V.begin();it!=V.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}


void initilizations_example() {
	vector <int> V1 {1, 2, 3, 4};
	V1.push_back(5);
	print(V1);
	print_using_iterator(V1);
	V1.pop_back();
	print(V1);
	print_using_iterator(V1);
	cout << V1.empty() << endl;
	cout << V1.front() << endl;
	cout << V1.back() << endl;
	cout << V1.data() << endl;
	cout << V1.at(2) << endl;
	V1.insert(V1.begin()+3, 10);
	print(V1);
	print_using_iterator(V1);
	V1.erase(V1.begin()+3);
	print(V1);
	print_using_iterator(V1);
	V1.clear();
	print(V1);
	print_using_iterator(V1);

	
	vector <int> V2;
	print(V2);
	print_using_iterator(V2);

	vector <int> V3 (10);
	print(V3);
	print_using_iterator(V3);

	vector <int> V4 (10, 55);
	print(V4);
	print_using_iterator(V4);

	int arr[5] = {1, 2, 3, 4, 5};
	cout << arr << endl;
	cout << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << arr + sizeof(arr)/sizeof(arr[0]) << endl;

	vector <int> V5 (arr, arr + sizeof(arr)/sizeof(arr[0]));
	print(V5);
	print_using_iterator(V5);

}

int main() {
	//vector <int> V {};
	initilizations_example();

}

