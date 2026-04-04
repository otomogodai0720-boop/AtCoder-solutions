#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n+1);
    A[0] = 1;
    A[1] = 1;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    for (int i=2; i<=n; i++) {
        string s = to_string(A[i-1]);
        int f = 0;
        rep(j,s.size()) {
            f += s[j]-'0';
        }
        A[i] = A[i-1] + f;
    }
    cout << A[n] << endl;
    return 0;
}