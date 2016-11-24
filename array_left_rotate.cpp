/*#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>*/
#include <iostream>
#include <vector>


using namespace std;

void swap(long int *a, long int *b) {
    long int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*vector<long int> array_left_rotation(vector<long int> a, int n, int k) {
    long int i = 0;
    long int j = 0;
    
    for (j=0;j<k;j++) {
        for (i=0;i<n-1;i++) {
            swap(&a[i], &a[i+1]);
        }
    }
    return a;
}*/

vector<long int> array_left_rotation(vector<long int> a, int n, int k) {
    long int i = 0;
    long int j = 0;
    vector<long int> b(n);
    for (i=0; i+k<n; i++) {
        b[i] = a[i+k];
    }
    for (i=0; i<k; i++) {
        b[n-k+i] = a[i];
    }
    return b;
}

int main(){
    long int n;
    long int k;
    cin >> n >> k;
    vector<long int> a(n);
    for(long int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<long int> output = array_left_rotation(a, n, k);
    for(long int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
