#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector <int> max_sliding_window(int arr[], int n, int w) {
	int i;

	deque <int> q;
	vector <int> v;

	for(i=0;i<w;i++) {
		while(!q.empty() && arr[i] >= arr[q.front()]) {
			q.pop_back();
		}
		q.push_back(i);
	}

	for(i=w;i<n;i++) {
		cout << "front: " << arr[q.front()] << endl;
		cout << "back: " << arr[q.back()] << endl;
		v.push_back(arr[q.front()]);
		while(!q.empty() && arr[i] >= arr[q.back()]) {
			q.pop_back();
		}
		while(!q.empty() && q.front() <= i-w) {
			q.pop_front();
		}
		q.push_back(i);
	}
	v.push_back(arr[q.front()]);
	return v;
}

void print_vector(vector <int> v) {
	int size = v.size();
	int i=0;
	for(i=0;i<size;i++) {
		cout << v[i] << ", ";
	}
	cout << endl;
}


int main() {
	int arr[] = {1, -2, 5, 6, 0, 9, 8, -1, 2, 0};
	int w = 3;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "size: " << size << endl;

	vector <int> v = max_sliding_window(arr, size, w);
	print_vector(v);
}