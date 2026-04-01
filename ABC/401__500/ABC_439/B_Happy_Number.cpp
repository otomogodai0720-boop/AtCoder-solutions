#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string n;
    cin >> n;

    rep(i,1000) {
        int ans = 0;
        for (char c : n) {
            ans += pow(c-'0', 2);
        }

        if (ans == 1) {
            cout << "Yes" << endl;
            return 0;
        }
        n = to_string(ans);
    }
    cout << "No" << endl;
    return 0;
}