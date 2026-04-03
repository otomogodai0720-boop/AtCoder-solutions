#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n) cin >> A[i];

    map<int, int> cnt;
    for (int x : A) {
        if (cnt.count(x)) cnt[x]++;
        else cnt[x] = 1;
    }

    int max_cnt = 0;
    int ans = -1;
    for(int x : A) {
        if (max_cnt < cnt[x]) {
            max_cnt = cnt[x];
            ans = x;
        }
    }
    cout << ans << " " << max_cnt << endl;
    return 0;
}