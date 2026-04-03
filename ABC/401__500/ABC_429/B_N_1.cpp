#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int sum = 0;
    rep(i,n) sum += a[i];
    rep(i,n) {
        if (sum-a[i] == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}