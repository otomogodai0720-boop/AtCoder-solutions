#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i,n) cin >> l[i], l[i] <<= 1;

    int ans = 0;
    rep(s,1<<n) {
        int now = 0;
        ll x = 1;
        rep(i,n) {
            ll p = x;
            if (s>>i&1) x += l[i];
            else x -= l[i];
            if (p/abs(p)*x < 0) now++;
        }
        ans = max(ans,now);
    }
    cout << ans << endl;
    return 0;
}







// 自分が最初に書いたコード（間違い）
// int main() {
//     int n;
//     cin >> n;
//     long double pos = 0.5;
//     int ans = 0;
//     rep(i,n) {
//         ll l;
//         cin >> l;
//         if (pos > 0) {
//             pos -= l;
//             if (pos < 0) ans++;
//             continue;
//         }
//         if (pos < 0) {
//             pos += l;
//             if (pos > 0) ans++;
//         }
//     }
//     cout << ans << '\n';
//     return 0;
// }