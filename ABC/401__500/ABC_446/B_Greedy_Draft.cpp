#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> juice(m+1); //残っているジュースの番号を管理。初期値はfalseになっている
    rep(i,n) {
        int l;
        cin >> l;
        vector<int> x(l);
        rep(j,l) cin >> x[j];
        int k = 0;
        rep(j,l) {
            if (!juice[x[j]]) { //juice[x[j]]がfalseだった場合、!によって条件式がtrueとなるのでif文が実行される。逆にtrueだった場合、!によって条件式がfalseになり、実行されない
                k = x[j];
                break;
            }
        }
        cout << k << endl;
        juice[k] = true;
    }
    return 0;
}