#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    vector<vector<int>> a(3, vector<int> (6));
    rep(i,3)rep(j,6) {
        cin >> a[i][j];
    }

    rep(i,3) {
        int cnt = 0;
        rep(j,6) {
        if (a[i][j] == 4 || a[i][j] == 5 || a[i][j] == 6) cnt++;
        }
    }
    return 0;
}