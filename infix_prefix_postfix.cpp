// Compile with:  g++ -std=c++11 infix_prefix_postfix.cpp

#include <iostream>
#include <stack>
#include <vector>

using namespace std;


bool checkPrecedence(string a, string b) {
	if (a == "*" || a == "/") {
		if(b == "*" || b == "/") {
			return 1;
		} else if (b == "+" || b == "-") {
			return 0;
		}
	} else if (a == "+" || a == "-") {
		return 1;
	}
}

bool isOperator(string a) {
	if(a == "-" || a == "+" || a == "/" || a == "*") {
		return 1;
	}
	return 0;
}


vector <string> convertToPostFix(const vector<string> &v) {
	vector <string> v_post;
	stack <string> temp;
	int v_size = v.size();
	int i;
	string op_st;

	for (i=0;i<v_size;i++) {
		if(isOperator(v[i])) {
			//if(!temp.empty()) {
				while((!temp.empty()) && checkPrecedence(v[i], temp.top()) == 1) {
					op_st = temp.top();
					temp.pop();
					v_post.push_back(op_st);
				}
				temp.push(v[i]);
			//} else {
			//	temp.push(v[i]);
			//}
		}
		else {
			v_post.push_back(v[i]);
		}
	}

	while (!temp.empty()) {
		v_post.push_back(temp.top());
		temp.pop();
	}
	return v_post;
}

float calculatePostfix(const vector <string> &v) {
	int v_size = v.size();
	int i;
	string data;
	stack <float> temp;
	float value, opr1, opr2;

	for(i = 0;i<v_size;i++) {
		data = v[i];
		if(isOperator(data)) {
			opr1 = temp.top();
			temp.pop();
			opr2 = temp.top();
			temp.pop();
			if(data == "+") {
				value = opr2 + opr1;
			} else if(data == "-") {
				value = opr2 - opr1;
			} else if(data == "*") {
				value = opr2 * opr1;
			} else if(data == "/") {
				value = opr2 / opr1;
			}
			temp.push(value);
		} else {
			temp.push(stoi(data));
		}
	}
	return temp.top();
}


int main() {
	int n, i;
	string data;
	cout << "Length of expression: "; 
	cin >> n;

	vector <string> v;
	vector <string> v_postfix;
	for (i=0;i<n;i++) {
		cin >> data;
		v.push_back(data);
	} 

	cout << "Given infix expression: ";

	for (i=0;i<n;i++) {
		cout << v[i] << " ";
	} 

	cout << endl;
	
	v_postfix = convertToPostFix(v);

	cout << "Postfix: ";

	for (i=0;i<n;i++) {
		cout << v_postfix[i] << " ";
	} 

	cout << endl;

	cout << "Value of postfix expression is: " << calculatePostfix(v_postfix) << endl;

	return 0;
}