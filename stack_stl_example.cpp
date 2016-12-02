#include <iostream>
#include <stack>
#include <vector>

using namespace std;

/*
Following properties of a stack are there
1. empty
2. push 
3. pop
4. top
5. swap
*/

bool checkEmpty(const stack<int> &s) {
	if (s.empty()) {
		return true;
	} else {
		return false;
	}
}


void printStack(stack <int> &s) {
	while(!s.empty()) {
		cout << " " << s.top();
		s.pop();
	}
	cout << endl;
}

void pushStack(stack <int> &s) {
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
}

int printTop(const stack <int> &s) {
	if (!s.empty()) {
		return s.top();
	}
	return -1;
}

int main() {
	stack <int> s;
	cout << "Check empty: " << checkEmpty(s) << endl;
	printStack(s); 
	pushStack(s);
	cout << "Top: " << printTop(s) << endl; 
	printStack(s);
	pushStack(s);
	cout << "Top: " << printTop(s) << endl; 
	//swapStack(s);
	return 0;
}
