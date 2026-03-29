#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> C(n, vector<int> (n));
    rep(i,n) {
        for (int j = i+1; j<n; j++) cin >> C[i][j];
    }

    rep(a,n)rep(b,n)rep(c,n) {
        if (a >= b) continue;
        if (b >= c) continue;
        if (C[a][c] > C[a][b]+C[b][c]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;

}