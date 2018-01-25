#include <iostream>
#include <map>

using namespace std;

bool checkAnagram(string s1, string s2) {
    if(s1.size() != s2.size()) {
        return false;
    }
    map<char, int> m;
    
    for(int i=0;i<s1.size();i++) {
        if(m.find(s1[i]) == m.end()) {
            m[s1[i]] = 1;
        } else {
            m[s1[i]]++;
        }
        
        if(m.find(s2[i]) == m.end()) {
            m[s2[i]] = -1;
        } else {
            m[s2[i]]--;
        }
    }
    
    map<char, int>::iterator it;
    for(it=m.begin();it!=m.end();it++) {
        if((*it).second != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "CATA";
    string s2 = "TACB";
    cout << checkAnagram(s1, s2);
    return 0;
}