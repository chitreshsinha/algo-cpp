//https://www.geeksforgeeks.org/write-a-c-program-that-given-a-set-a-of-n-numbers-and-another-number-x-determines-whether-or-not-there-exist-two-elements-in-s-whose-sum-is-exactly-x/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

string checkSum(map<int, int> &m, int num) {
    map<int, int>::iterator it;
    
    for(it=m.begin();it!=m.end();it++) {
        if(m.find((*it).second) != m.end()) {
            return "Yes";
        }
    }
    return "No";
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, num;
        cin >> N;
        cin >> num;
        int n;
        vector<int> v;
        map<int, int> m;
        for(int i=0;i<N;i++) {
            cin >> n;
            v.push_back(n);
            m[n] = num - n;
        }
        cout << checkSum(m, num) << endl;
    }

	return 0;
}