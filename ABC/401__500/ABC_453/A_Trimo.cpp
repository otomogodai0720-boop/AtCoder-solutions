#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    rep(i,n) {
        if (s[i] == 'o') cnt++;
        if (s[i] != 'o') {
            string ans = s.substr(cnt,n-cnt);
            cout << ans << endl;
            break;
        }
    }
    return 0;
}