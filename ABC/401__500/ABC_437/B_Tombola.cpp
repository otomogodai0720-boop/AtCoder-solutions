#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<vector<int>> table(h, vector<int> (w));
    rep(i,h)rep(j,w) cin >> table[i][j];
    vector<int> B;
    rep(i,n) {
        int b;
        cin >> b;
        B.push_back(b);
    }

    int ans = 0;
    rep(i,h) {
        int cnt = 0;
        rep(j,w) {
            rep(k,n) {
                if (table[i][j] == B[k]) cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}