#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    string ans = s.substr(a, n-a-b);
    cout << ans << endl;
    return 0;
}