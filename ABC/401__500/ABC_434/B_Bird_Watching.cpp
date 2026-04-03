#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> type_cnt(n+1);
    vector<int> size(n+1);
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        type_cnt[a]++;
        size[a] += b;
    }
    for (int i=1; i<=m; i++) {
        double ave = (double)size[i]/(double)type_cnt[i];
        cout << fixed << setprecision(20) << ave << endl;
    }
    return 0;
}