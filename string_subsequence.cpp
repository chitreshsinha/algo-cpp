#include <iostream>
#include <map>

using namespace std;

map<string, bool> m;

void printSub(string s) {
    //cout << s << endl;
    m[s] = true;
    int len = s.size();
    
    for(int i=0;i<len;i++) {
        string ns = s.substr(0, i) + s.substr(i+1, len);
        //cout << ns << endl;
        printSub(ns);
        //cout << s.substr(0, i) << " " << s.substr(i+1, len) << endl;
    }
}

int main() {
    string s = "ABCD";
    printSub(s);
    map<string, bool>::iterator it;
    for(it=m.begin();it!=m.end();it++) {
        cout << (*it).first << endl;
    }
    return 0;
}