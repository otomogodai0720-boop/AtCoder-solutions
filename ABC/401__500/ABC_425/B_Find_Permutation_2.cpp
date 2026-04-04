#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> num(n+1);
    vector<int> ans(n);
    rep(i,n) {
        cin >> a[i];
        if (a[i] != -1 && num[a[i]]) {
            cout << "No" << endl;
            return 0;
        }
        if (a[i] != -1) {
            num[a[i]] = true;
            ans[i] = a[i];
        }
    }
    cout << "Yes" << endl;
    vector<int> can;
    for (int i=1; i<=n; i++) {
        if (!num[i]) can.push_back(i);
    }
    int k = 0;
    rep(i,n) {
        if (ans[i] == 0) {
            ans[i] = can[k];
            k++;
        }
    }
    rep(i,n) cout << ans[i] << " " ;
    return 0;
}