#include <iostream>
#include <map>

using namespace std;

map<string, bool> m;

void printSub(string s) {
    //cout << s << endl;
    if(s.size()==0) {
    	return;
    }

    if(m.find(s) == m.end()) {
    	m[s] = true;
	    int len = s.size();
	    
	    for(int i=0;i<len;i++) {
	        string ns = s.substr(0, i) + s.substr(i+1, len);
	        //cout << ns << endl;
	        printSub(ns);
	        //cout << s.substr(0, i) << " " << s.substr(i+1, len) << endl;
	    }
    }
}

int main() {
    string s = "xyzx";
    printSub(s);
    map<string, bool>::iterator it;
    for(it=m.begin();it!=m.end();it++) {
        cout << (*it).first << endl;
    }
    return 0;
}