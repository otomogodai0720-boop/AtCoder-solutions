#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, b;
    cin >> h >> b;

    if (h < b) {
        cout << 0 << endl;
        return 0;
    }
    else cout << h-b << endl;
    return 0;
}