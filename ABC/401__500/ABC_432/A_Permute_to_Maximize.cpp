#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> num(3);
    num[0] = a;
    num[1] = b;
    num[2] = c;

    sort(num.begin(), num.end(), greater<int>()); //greater<int>()をつける事によって大きい順にsortできる

    rep(i,3) cout << num[i];

    return 0;
}