#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    ll ans = 0;
    rep(i,n) ans += min(a[i], b[i]);

    rep(i,q) {
        char c;
        int x, v;
        cin >> c >> x >> v;
        x--;
        int pre = min(a[x], b[x]);
        if (c == 'A') a[x] = v;
        else b[x] = v;
        int now = min(a[x], b[x]);
        ans += now-pre; 
        cout << ans << endl;
    }
    return 0;
}


// 最初に自分で書いたコード（間違っている）
// int main() {
//     int n, q;
//     cin >> n >> q;
//     vector<int> a(n), b(n);
//     rep(i,n) cin >> a[i];
//     rep(i,n) cin >> b[i];
//     rep(i,q) {
//         char c;
//         int x, v;
//         cin >> c >> x >> v;
//         if (c == 'A') a[x-1] = v;
//         if (c == 'B') b[x-1] = v;
//         int ans = 0;
//         rep(k,n) {
//             ans += min(a[k],b[k]);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }