#include <iostream>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int x, y, z;
    cin >> x >> y >> z;
   rep(i,1000) { //倍率は年数が増えるほど小さくなっていく
    if (x == z*y) {
        cout << "Yes" << endl;
        return 0;
    }
    x++; y++;
    }
 cout << "No" << endl;
}