#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int x, y;
    cin >> x >> y;
    int64_t ans;
    rep(ai,8) {
        string t = to_string(x+y);
        reverse(t.begin(),t.end());
        ans = stoll(t); //stoiでは21億の10桁までしか表示できないのでstollを使用した
        x = y; y = ans;
    }
    cout << ans << endl;
    return 0;
}