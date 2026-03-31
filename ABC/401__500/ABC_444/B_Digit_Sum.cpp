#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int n,k;
    cin >> n >> k;

    int ans = 0;
    rep(i,n) {
        string s = to_string(i+1);
        int sum =0;
        for (char c : s) sum += c-'0'; //string型のsの一文字はchar型になっているので１文字ずつchar型のcにコピーして計算するときにint型として計算できるようにする
        if (sum == k) ans++;
    }
    cout << ans << endl;
    return 0;
}