#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<string,int> cnt;
    rep(i,n-k+1) {
        string t = s.substr(i, k);
        cnt[t]++; //keyに対するvalueが存在しない場合は、valueが０で初期化されるのでこの1行でcntにtを追加し、出現回数を数えることができる
    }

    int x = 0;
    for (auto p : cnt) {　//mapの要素を一つ一つなめるためにはこのようにしてfor文を回せばいい
        x = max(x,p.second);
    }
    cout << x << endl;

    for(auto p : cnt) {
        if (p.second == x) cout << p.first << " " ;
    }
    return 0;
}