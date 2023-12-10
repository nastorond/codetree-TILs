#include <iostream>
#include <list>

using namespace std;

int main() {
    list<char> l;
    list<char>::iterator it;

    int n, m;

    cin >> n >> m;

    char c;
    for(int i=0;i<n;i++){
        cin >> c;
        l.push_back(c);
    }
    it = l.begin();
    for(int i=0;i<n;i++) it++;

    char order;
    for (int i=0; i<m; i++) {
        cin >> order;
        if (order == 'L') it--;
        else if (order == 'R') it++;
        else if (order == 'D') {
            it = l.erase(it);
        }
        else {
            cin >> c;
            l.insert(it, c);
        }

    }

    for(it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }
    return 0;
}