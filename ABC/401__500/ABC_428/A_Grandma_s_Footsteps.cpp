#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;
    
    int block = x/(a+b);
    int ans = block*a*s;
    if (x%(a+b) < a) ans += x%(a+b)*s;
    else ans += s*a;

    cout << ans << endl;
    return 0;
}