#include <iostream>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int p, q, x, y;
    cin >> p >> q >> x >> y;

    if (p <= x && x < 100+p && q <= y && y < 100+q) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return 0;
}