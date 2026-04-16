#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int n, m;
    cin >> n >> m;
    
    int ans = 0;
    using P = pair<int, int>;
    set<P> st; //setは高速で計算することのできるデータ構造である
    rep(i,m) {
        int r, c;
        cin >> r >> c;
        bool ok = true;
        rep(dr,2)rep(dc,2) {
            if (st.count(P(r+dr,c+dc))) ok = false; //countはstの中にP(r+dr,c+dc))が入っているかどうかをチェックするためのもので、今回はsetを使っているので0か1しか返さないが、１以上の時trueとなる
        }
        if (!ok) continue;
        rep(dr,2)rep(dc,2) {
            st.insert(P(r+dr, c+dc));
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}


// 自分の解答（間違い）
// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<bool>> table(n, vector<bool> (n));
//     int ans = 0;
// 
//     rep(i,m) {
//         int r, c;
//         cin >> r >> c;
//         if (table[r][c]) continue;
//         if (table[r][c+1]) continue;
//         if (table[r+1][c]) continue;
//         if (table[r+1][c+1]) continue;
//         else {
//             table[r][c] = true;
//             table[r][c+1] = true;
//             table[r+1][c] = true;
//             table[r+1][c+1] = true;
//             ans++;
//         }
//     }
//     cout << ans << "\n";
//     return 0;
// }