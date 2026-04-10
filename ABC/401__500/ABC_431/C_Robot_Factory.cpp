#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> h(n), b(m);
    rep(i,n) cin >> h[i];
    rep(i,m) cin >> b[i];
    sort(h.begin(), h.end());
    sort(b.begin(), b.end());

    vector<int> kh(h.begin(), h.begin() + k);
    vector<int> kb(b.end() - k, b.end());

    rep(i,k) {
        if (kh[i] > kb[i]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}