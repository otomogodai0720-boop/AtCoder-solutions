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
        int pre = min(a[x], b[x]); //変更される前の小さい方の値をpreに入れておく
        if (c == 'A') a[x] = v;
        else b[x] = v;
        int now = min(a[x], b[x]); //変更された後に小さい方をnowに入れておく
        ans += now-pre; //一回のクエリで変わるのはxの要素のみで、それ以外の要素はクエリ前のものと変わらない。したがって、一個前の和に変更した要素の差分を足せばいいだけなのでans += now-preとして出力すれば良い
        cout << ans << endl;
    }
    return 0;
}


// 最初に自分で書いたコード（WAもでるし、TLEにもなる）
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
