#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> vec;

    rep(i,n) {
        int a,b;
        cin >> a >> b;
        pair<int, int> p(b, a); //firstの比較をしてからそれが等しければsecondの比較に入る
        vec.push_back(p); //配列の一つの要素の中にペアを入れることができる
    }
    sort(vec.begin(), vec.end());

    rep(i,n) {
        int a, b;
        tie(b, a) = vec[i]; //pairの分解
        cout << a << " " << b << '\n';
    }
    return 0;
}