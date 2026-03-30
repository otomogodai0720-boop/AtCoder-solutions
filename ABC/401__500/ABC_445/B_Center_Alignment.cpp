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
            int k = (mx - s[i].size())/2;
            rep(j,k) s[i] = '.' + s[i];
            rep(j,k) s[i] = s[i] + '.';
            cout << s[i] << endl;
    }
    //rep(i,n) {
       //int k = (mx - s[i].size())/2;
       // string t;
       // t += string(k,'.'); //if文をk回回して.をつけなくてもこのようにするとk個の.がつく
       // t += s[i];
       // t += string(k,'.');
       // cout << t << endl;
    //}
    return 0;
}