#include <iostream>
#include <stack>

using namespace std;

void initialization_example(){
	stack <int> S1;
	cout << S1.empty() << endl;
	S1.push(1);
	cout << S1.empty() << endl;
	S1.push(2);
	cout << S1.top() << endl;
	cout << S1.size() << endl;
	S1.push(3);
	cout << S1.top() << endl;
	S1.pop();
	cout << S1.top() << endl;
}

int main() {
	initialization_example();
	return 0;
}
