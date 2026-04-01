#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> T(n);
    rep(i,n) {
        int t;
        cin >> t;
        pair<int, int> p(t, i+1);
        T[i] = p;
    }
    sort(T.begin(), T.end());

    rep(i,3) {
        int t;
        int num;
        tie(t, num) = T[i];
        cout << num << " ";
    }

    return 0;
}