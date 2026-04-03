#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> w(n+1);
    for (int i=1; i<=n; i++) cin >> w[i];
    int q;
    cin >> q;
    vector<bool> ch(n+1);
    rep(i,q) {
        int p;
        cin >> p;
        if (!ch[p]) {
            x += w[p]; 
            ch[p] = true; 
        }
        else {
            x -= w[p]; 
            ch[p] = false; 
        }
        cout << x << endl;
    }
    return 0;
}