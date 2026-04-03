#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin >> a[i];

    for (int i=1; i<=n; i++) {
        if (i == 1) {
            cout << -1 << endl;
            continue;
        }
        int ans = -1;
        for (int j=1; j<=i-1; j++) {
            if (a[j]-a[i] > 0) ans = j;
        }

        cout << ans << endl;
    }
    return 0;
}