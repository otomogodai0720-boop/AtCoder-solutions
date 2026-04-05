#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<string> s(n),t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];

    int ans = 1001001001; //操作回数の最小値を出すのでansは大きい数にしておく
    rep(ri,4) { //90度回転させない場合から、3回回転させるまでをまわす
        {
            int now = ri;
            rep(i,n)rep(j,n) {
                if (s[i][j] != t[i][j]) now++; //回転させてから、マス目の色を変える回数が最も少ないものを選び出したい
            }
            ans = min(ans,now);
        }

        {
            vector<string> ns = s; //コピーしておくことによって元のグリッドを上書きしてしまうような心配がなくなる
            rep(i,n)rep(j,n) {
                ns[j][n-i-1] = s[i][j]; //90度回転させる方法は最初にi,jを入れ替えて、その後、列を反対にする
            }
            s = ns; //90度回転させたら元のグリッドのsに反映させる
        }
    }

    cout << ans << endl;
    return 0;
}