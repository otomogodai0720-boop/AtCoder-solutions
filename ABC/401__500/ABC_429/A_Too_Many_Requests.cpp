#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;

    rep(i,n) {
        if (i < m) cout << "OK" << endl;
        else cout << "Too Many Requests" << endl;
    }
    return 0;
}