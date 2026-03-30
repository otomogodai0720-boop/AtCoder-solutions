#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

 //問題を解く前に胡椒の番号ごとに分けて表を作り、考えると解きやすくなる
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> c(m);
    rep(i,m) cin >> c[i];

    vector<int> sumB(m);
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        a--;
        sumB[a] +=b;
    }

    int ans = 0;
    rep(i,m) ans += min(c[i], sumB[i]);
    cout << ans << endl;
    return 0;
}