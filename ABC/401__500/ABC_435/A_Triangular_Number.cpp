#include <iostream>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i,n) ans += i+1;
    cout << ans << endl;
    return 0;
}
