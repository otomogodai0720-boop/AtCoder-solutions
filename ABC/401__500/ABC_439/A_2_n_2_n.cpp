#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = pow(2, n) - 2*n; //pow(a,b)でa^bを計算することができる
    cout << ans << endl;
    return 0;
}