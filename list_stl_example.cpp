#include <iostream>
#include <list>

using namespace std;

void print_using_iterator(list <int> &L) {
	list <int>::iterator it;
	//it = L.begin();
	for(it=L.begin();it!=L.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void initilizations_example(){
	list <int> L {1, 2, 3, 4};
	print_using_iterator(L);
	L.push_back(5);
	print_using_iterator(L);
	L.push_front(1);
	print_using_iterator(L);
	L.pop_back();
	print_using_iterator(L);
	L.pop_front();
	print_using_iterator(L);
	cout << L.empty() << endl;
	cout << L.size() << endl;
	cout << L.max_size() << endl;
	cout << L.front() << endl;
	cout << L.back() << endl;
	list <int>::iterator it = L.begin();
	it++;
	L.insert(it, 10);
	print_using_iterator(L);
	L.insert(it, 20);
	print_using_iterator(L);
	L.push_back(30);
	print_using_iterator(L);
	L.remove(30);
	print_using_iterator(L);
	L.push_back(1);
	print_using_iterator(L);
	L.push_back(2);
	print_using_iterator(L);
	L.push_back(3);
	print_using_iterator(L);
	L.push_back(4);
	print_using_iterator(L);
	L.sort();
	cout << "Sorted: ";
	print_using_iterator(L);
	L.unique();
	cout << "Unique: ";
	print_using_iterator(L);
	it = L.begin();
	list <int>::iterator it1 = it;
	++it1;
	L.erase(it1);
	print_using_iterator(L);
	list <int>::iterator it2 = it;
	++it2;
	L.erase(it2);
	print_using_iterator(L);
	L.clear();
	print_using_iterator(L);

	cout << "Merge Example:" << endl;
	list <int> L1;
	list <int> L2;

	L1.push_back(3);
	L1.push_back(2);
	L1.push_back(1);

	L2.push_back(3);
	L2.push_back(7);
	L2.push_back(2);

	print_using_iterator(L1);
	L1.sort();
	print_using_iterator(L1);
	print_using_iterator(L2);
	L2.sort();
	print_using_iterator(L2);

	L1.merge(L2);
	print_using_iterator(L1);
	print_using_iterator(L2);

	L2.merge(L1);
	print_using_iterator(L1);
	print_using_iterator(L2);
	L2.reverse();
	print_using_iterator(L2);

	list <int> L3 (4, 100);
	print_using_iterator(L3);	
}

int main() {
	initilizations_example();
	return 0;
}