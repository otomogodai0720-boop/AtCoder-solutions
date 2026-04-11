#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> cnt(n);
    rep(i,k) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        cnt[a]++;
        if (cnt[a] == m) cout << a+1 << " ";
    }
    return 0;
}