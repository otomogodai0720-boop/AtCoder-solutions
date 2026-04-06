#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int ans = 0;
    int r = 0;
    
    rep(i,n) {
        if (i > r) break; //一つ一つ倒れているかチェックしていくのではなく、一番右側の倒れているドミノだけわかれば解ける
        r = max(r, i+a[i]-1);
        ans++;
    }
    cout << ans << endl;
    return 0;
}