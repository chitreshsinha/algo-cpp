//https://www.geeksforgeeks.org/merging-intervals/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Range {
    int start;
    int end;
};

bool compFunc(Range r1, Range r2) {
    if(r1.start < r2.start) {
        return true;
    } else {
        return false;
    }
}

void printVec(vector<Range> vec) {
    int size = vec.size();
    for(int i=0;i<size;i++) {
        cout << vec[i].start << " " << vec[i].end << " ";
    }
    cout << endl;
}

void sorted(vector <Range> &v) {
    sort(v.begin(), v.end(), compFunc);
}

vector<Range> mergeIntervals(vector <Range> v) {
    int size = v.size();
    int start = v[0].start;
    int end = v[0].end;
    vector<Range> res;
    for(int i=1;i<size;i++) {
        if(v[i].end >= start && v[i].end <= end) {
            continue;
        } else if (v[i].start <= end && v[i].end >= end) {
            end = v[i].end;
        } else {
            Range r;
            r.start = start;
            r.end = end;
            start = v[i].start;
            end = v[i].end;
            res.push_back(r);
        }
    }
    Range r;
    r.start = start;
    r.end = end;
    res.push_back(r);
    return res;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector <Range> vec;
        for(int i=0;i<N;i++) {
            Range r;
            cin >> r.start;
            cin >> r.end;
            vec.push_back(r);
        }
        //cout << "Original Vector: " << endl;
        //printVec(vec);
        sorted(vec);
        //cout << "Sorted Vector: " << endl;
        //printVec(vec);
        //cout << "Result Vector: " << endl;
        vector <Range> res = mergeIntervals(vec);
        printVec(res);
    }   
	return 0;
}