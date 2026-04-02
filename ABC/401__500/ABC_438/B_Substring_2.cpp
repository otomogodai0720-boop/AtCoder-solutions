#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int ans = 1001001001;

    rep(si,n-m+1) {
        string ns = s.substr(si, m);
        string nt = t;
        int cnt = 0;
        rep(i,m) {
            while (nt[i] != ns[i]) {
                if (nt[i] == '9') nt[i] = '0'; else nt[i]++;
                cnt++;
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}