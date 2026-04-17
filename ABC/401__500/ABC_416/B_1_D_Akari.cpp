#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string t = s;
    rep(i,n) {
        if (t[0] == '.') t[0] = 'o';
        if (t[i] == '#' && t[i+1] == '.') t[i+1] = 'o';
    }
    cout << t << endl;
    return 0;
}

// 模範解答
// int main() {
//     string s;
//     cin >> s;
//     if (s[0] == '.') s[0] = 'o';
//     rep(i,s.size()-1) {
//         if (s.substr(i,2) == "#.") s[i+1] = 'o';
//     }
//     cout << s << endl;
//     return 0;
// }