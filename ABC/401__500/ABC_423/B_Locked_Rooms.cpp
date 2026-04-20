#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i,n) cin >> l[i];

    int L = n, R = 0;
    rep(i,n) if (l[i] == 1) {
        L = min(L, i);
        R = max(R, i);
    }
    if (L == n) cout << 0 << endl;
    else cout << R-L << endl;
    return 0;
}

// 自分で解いたやつ（なんか間違っている）
// int main() {
//     int n;
//     cin >> n;
//     vector<int> l(n);
//     rep(i,n) cin >> l[i];
//     
//     int x = 0;
//     int y = n;
//     rep(i,n) {
//         if (l[i] == 0) x++;
//         if (l[i] == 1) break;
//     }
//     rep(i,n) {
//         if (l[n-i] == 0) y--;
//         if (l[n-i] == 1) break;
//     }
//     if (y<x) {
//         cout << 0 << endl;
//         return 0;
//     }
//     cout << y-x << endl;
//     return 0;
// }