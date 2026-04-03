#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    set<vector<string>> st;
    rep(si,n-m+1)rep(sj,n-m+1) { //左上のマス目を起点にしてループの回数を数える
        vector<string> t(m);
        rep(i,m)rep(j,m) {
            t[i] += s[si+i][sj+j];
        }
        st.insert(t);
    }

    cout << st.size() << endl;
    return 0;
}