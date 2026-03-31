#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int n,m,q;
    cin >> n >> m;
    string s, t;
    cin >> s >> t >> q;

   vector<bool> alphabet_takahashi(26);
   vector<bool> alphabet_aoki(26);
   for (char c : s) alphabet_takahashi[c-'a'] = true;
   for (char c : t) alphabet_aoki[c-'a'] = true;

   rep(i,q) {
    string w;
    cin >> w;
    vector<bool> judge(3);
    for (char c : w) {
        if (!alphabet_takahashi[c-'a']) judge[1] = true;
        if (!alphabet_aoki[c-'a']) judge[0] = true;
        else judge[2] = true;
    }
    if (judge[0]) {
        cout << "Takahashi" << endl;
        continue;
    }
    if (judge[1]) {
        cout << "Aoki" << endl;
        continue;
    }
    if (judge[2]) cout << "Unknown" << endl;
   }
   return 0;
}