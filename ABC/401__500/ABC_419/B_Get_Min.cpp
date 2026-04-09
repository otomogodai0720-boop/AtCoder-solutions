#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> num;
    rep(i,q) {
        int type;
        cin >> type;
        if (type == 1) {
            int x; 
            cin >> x;
            num.push(x);
        }
        if (type == 2) {
            cout << num.top() << endl;
            num.pop();
        }
    }
    return 0;
}