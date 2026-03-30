#include<iostream>
#include<vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int n;
    cin >> n;

    int mx = 0;
    vector<string> s(n);

    rep(i,n) {
        cin >> s[i];
        mx = max((int)s[i].size(), mx); //.size()は非負整数なのでint型のmxと比較することができない。そこで前に(int)とつけてやれば比較できるようになる。これを「キャスト」という
    }

    rep(i,n) {
        if ((int)s[i].size() < mx) {
            int dot = (mx - s[i].size())/2;
            rep(j,dot) s[i] = '.' + s[i];
            rep(j,dot) s[i] = s[i] + '.';
            cout << s[i] << endl;
        }
        else cout << s[i] << endl;
    }
    return 0;
}