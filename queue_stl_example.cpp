#include <iostream>
#include <queue>
#include <cassert>

using namespace std;

void initilizations_example() {
	queue <int> Q;
	queue <int> Q1;
	Q1.push(1);
	cout << "Empty: " << Q.empty() << endl;
	cout << "Front: " << Q.front() << endl;
	cout << "Size: " << Q.size() << endl << endl;
	Q.push(1);
	cout << "Empty: " << Q.empty() << endl;
	cout << "Front: " << Q.front() << endl;
	cout << "Back: " << Q.back() << endl;
	cout << "Size: " << Q.size() << endl << endl;
	Q.push(2);
	cout << "Empty: " << Q.empty() << endl;
	cout << "Front: " << Q.front() << endl;
	cout << "Back: " << Q.back() << endl;
	cout << "Size: " << Q.size() << endl << endl;
	Q.push(3);
	cout << "Empty: " << Q.empty() << endl;
	cout << "Front: " << Q.front() << endl;
	cout << "Back: " << Q.back() << endl;
	cout << "Size: " << Q.size() << endl << endl;
	Q.push(4);
	cout << "Empty: " << Q.empty() << endl;
	cout << "Front: " << Q.front() << endl;
	cout << "Back: " << Q.back() << endl;
	cout << "Size: " << Q.size() << endl << endl;
	Q.pop();	
	cout << "Empty: " << Q.empty() << endl;
	cout << "Front: " << Q.front() << endl;
	cout << "Back: " << Q.back() << endl;
	cout << "Size: " << Q.size() << endl << endl;

	//cout << "Size: " << Q.size() << endl << endl;
	assert(Q.size() == 3);

	Q1.swap(Q);
	cout << "Q Empty: " << Q.empty() << endl;
	cout << "Q Front: " << Q.front() << endl;
	cout << "Q Back: " << Q.back() << endl;
	cout << "Q Size: " << Q.size() << endl << endl;

	cout << "Q1 Empty: " << Q1.empty() << endl;
	cout << "Q1 Front: " << Q1.front() << endl;
	cout << "Q1 Back: " << Q1.back() << endl;
	cout << "Q1 Size: " << Q1.size() << endl << endl;	
}

int main() {
	initilizations_example();
	return 0;
}
