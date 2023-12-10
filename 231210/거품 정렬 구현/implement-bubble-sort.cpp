#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    bool sorted = false;
    int n, num;
    vector<int> li;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        li.push_back(num);
    }
    
    int tmp;
    while (sorted == false) {
        for (int j=0; j<n; j++) {
            for (int i=0; i<n-1; i++) {
                sorted = true;
                if (li[i] > li[i+1]) {
                    tmp = li[i];
                    li[i] = li[i+1];
                    li[i+1] = tmp;
                    sorted = false;
                }
            }
        }
    }

    for (int i=0; i<li.size(); i++) {
        cout << li[i] << " ";
    }

    return 0;
}