#include <iostream>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int w, b;
    cin >> w >> b;

    w *= 1000;
    int ans = 0;
    int nb =0;
    while (w >= nb) {
        ans++;
        nb += b; 
    }
    cout << ans << endl;
    return 0;
}