#include <iostream>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w, q;
    cin >> h >> w >> q;

    rep(i,q) {
        int type, num;
        cin >> type >> num;

        if (type == 1) {
            cout << num*w << endl;
            h -=num;
        }
        else {
            cout << num*h << endl;
            w -=num;
        }
    }
    return 0;
}