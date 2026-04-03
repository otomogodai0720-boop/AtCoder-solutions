#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> table(n, vector<int> (n));
    table[0][(n-1)/2] = 1;
    int r = 0; int c = (n-1)/2; int k = 1;

    rep(i,n*n-1) {
        if (table[((r-1)%n+n)%n][((c+1)%n+n)%n] == 0) {
            table[((r-1)%n+n)%n][((c+1)%n+n)%n] = k+1;
            r = ((r-1)%n+n)%n;
            c = ((c+1)%n+n)%n;
            k++;
        }
        else if (table[((r-1)%n+n)%n][((c+1)%n+n)%n] != 0) {
            table[(r+1)%n][c] = k+1;
            r = (r+1)%n;
            k++;
        }
    }

    rep(i,n) {
        rep(j,n) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}