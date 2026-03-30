#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;

    vector<int> cnt(26); //a~zを表す配列を用意する
    for (char c : s) cnt[c-'a']++; //sの文字を一つ一つ見ていき、文字の個数を数えて、cntに入れていく。c-'a'とする事によってアルファベットを数字にすることができる

    int mx = 0;
    rep(i,26) mx = max(mx, cnt[i]); //cntの要素を一つ一つ見ていき、文字数の最大値を求める

    string ans;
    for (char c : s) {
        if (cnt[c-'a'] != mx) ans += c; //文字数が最大値でなければansに足していく
    }
    cout << ans << endl;
    return 0;
}