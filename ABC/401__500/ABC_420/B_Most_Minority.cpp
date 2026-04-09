#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> S(n);
    rep(i,n) cin >> S[i];

    vector<int> point(n);
    rep(i,m) {
        int cnt_one = 0;
        int cnt_zero = 0;
        rep(j,n) {
            if (S[j][i] == '1') cnt_one++; //S[j][i]はchar型なので''をつけることを忘れない
            else cnt_zero++;
        } 

        rep(j,n) {
            if (cnt_one < cnt_zero && S[j][i] == '1') point[j]++;
            if (cnt_one > cnt_zero && S[j][i] == '0') point[j]++;
            if (cnt_one == 0 && S[j][i] == '0') point[j]++;
            if (cnt_zero == 0 && S[j][i] == '1') point[j]++;
        }
    }
    int mx = 0;
    rep(i,n) {
        mx = max(mx, point[i]);
    }

    rep(i,n) {
        if (point[i] == mx) cout << i+1 << " ";
    }
    return 0;
}