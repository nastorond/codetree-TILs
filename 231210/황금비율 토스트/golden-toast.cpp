#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<char> l;
    list<char>::iterator it;

    int n, m;
    char c;
    string s;

    cin >> n >> m;
    cin >> s;

    for(int i=0;i<s.length();i++){
        l.push_back(s[i]);
    }
    it = l.end();

    char order;
    for (int i=0; i<m; i++) {
        cin >> order;

        if (order == 'L' && l.begin() != it) it--;
        else if (order == 'R' && l.end() != it) it++;
        else if (order == 'D' && l.end() != it) {
            it = l.erase(it);
        }
        else if (order == 'P') {
            cin >> c;
            l.insert(it, c);
        }

    }

    for(it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }
    return 0;
}