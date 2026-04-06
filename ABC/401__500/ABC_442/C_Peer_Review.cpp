#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> deg(n); //次数を数えるようの配列を用意する
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        deg[a]++;
        deg[b]++;
    }
    rep(i,n) {
        ll x = n-1-deg[i]; //査読できる人数を数える
        ll ans = x*(x-1)*(x-2)/6; //xC3の計算をする
        cout << ans << " ";
    }
    return 0;
}