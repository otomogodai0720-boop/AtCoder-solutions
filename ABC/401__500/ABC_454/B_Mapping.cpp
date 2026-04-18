#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;

    set<int> F;
    int f;
    rep(i,n) {
        cin >> f;
        F.insert(f);
    }
    if (F.size() == n) cout << "Yes" << endl;
    else cout << "No" << endl;
    if (F.size() == m) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}