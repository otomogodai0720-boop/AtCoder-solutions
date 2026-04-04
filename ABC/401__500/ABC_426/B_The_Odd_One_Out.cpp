#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    map<char,int> cnt;
    rep(i,s.size()) {
        cnt[s[i]]++;
    }
    for (auto p : cnt) {
        if (p.second == 1) cout << p.first << endl;
    }

    return 0;
}