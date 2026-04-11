#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int t, x;
    cin >> t >> x;
    int temp = 1001001001;
    rep(i,t+1) {
        int a;
        cin >> a;
        if (abs(temp-a) >= x) {
            cout << i << " " << a << endl;
            temp = a;
        }
    }
    return 0;
}