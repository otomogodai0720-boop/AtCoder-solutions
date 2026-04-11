#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    map<int,int> cnt;
    rep(i,n) cnt[i+a[i]]++;
    ll ans = 0;
    rep(i,n) ans += cnt[i-a[i]];
    cout << ans << endl;
    return 0;
}