//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
#include <iostream>
#include <vector>
using namespace std;

int maxi(int a, int b) {
    if(a > b) {
        return a;
    }
    return b;
}

int kadane1(int a[], int len) {
    int curr_so_far = a[0];
    int max = a[0];
    for(int i=1;i<len;i++) {
        curr_so_far = maxi(a[i], curr_so_far + a[i]);
        if(curr_so_far > max) {
            max = curr_so_far;
        }
    }
    return max;
}

int kadane(int a[], int len) {
    vector<int> v;
    v.push_back(a[0]);
    int max = a[0];
    for(int i=1;i<len;i++) {
        v.push_back(maxi(a[i], a[i] + v[i-1]));
        if(v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++) {
            cin >> arr[i];
        }
        cout << kadane1(arr, N) << endl;
    }
    
	return 0;
}