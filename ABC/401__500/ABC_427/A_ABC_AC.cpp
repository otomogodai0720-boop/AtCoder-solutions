#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    s.erase((s.size()+1)/2-1, 1);
    cout << s << endl;
    return 0;
}