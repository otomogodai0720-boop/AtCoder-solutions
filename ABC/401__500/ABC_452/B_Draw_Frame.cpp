#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> table(h, vector<char>(w,'#'));
    for (int i=1; i<h-1; i++) {
    for (int j=1; j<w-1; j++) {
        table[i][j] = '.';
    }
}
    rep(i,h) {
        rep(j,w) {
            cout << table[i][j];
        }
        cout << endl;
    }
    return 0;
}