#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    rep(i,m)rep(j,a.size()) { //aは削除されるごとに要素数が減っていくのでnではなく、a.size()にする
        if (a.empty()) return 0;
        if (b[i] == a[j]) {
            a.erase(a.begin() + j);
            break;
        }
    }
    for (int c : a) cout << c << " ";
    return 0;
}

// 別解
// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     rep(i,n) cin >> a[i];
//     rep(i,m) {
//         int b;
//         cin >> b;
//         auto it = find(a.begin(), a.end(), b);  //itはbのコピーが入っているのではなく、aという配列の中のbという要素の位置（住所）
//         if (it == a.end()) continue;  //条件式のようにするとaの最後の要素の一個後ろの住所をの住所を指す特殊なイテレータを返す
//         a.erase(it);
//     }
// 
//     rep(i,a.size()) cout << a[i] << " ";
// }