#include <iostream>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    int mn = 1000000;
   rep(i,n+1)rep(j,n/3+1) {
    int fee = x*i + y*j;
    int cnt = i+3*j;
    if (cnt == n) mn = min(fee, mn);
   }
   cout << mn << endl;
   return 0;
}