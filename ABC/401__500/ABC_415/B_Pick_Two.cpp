#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;

    vector<int> num;
    rep(i,s.size()) {
        if (s[i] == '#') num.push_back(i+1);
        if (num.size() == 2) {
            cout << num[0] << "," << num[1] << endl;
            num.clear();
        }
    }
    return 0;
}