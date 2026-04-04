#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int64_t m = 1;
    rep(i,k) m *= 10; //ansの上限を求める

    int64_t ans = 1;
    rep(i,n) {
        int64_t a;
        cin >> a;
        if ((m-1)/ans < a) ans = 1; //m-1 < ans*aのansを移行してans*aがオーバーフローしないようにするテクニック
        else ans *= a;
    }
    cout << ans << endl;
    return 0;
}