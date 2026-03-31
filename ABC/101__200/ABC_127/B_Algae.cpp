#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int r, d, x;
    cin >> r >> d >> x;
    rep(i,10) {
        int ans;
        ans = r*x - d;
        cout << ans << endl;
        x = ans;
    }
    return 0;
}