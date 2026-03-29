#include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;


    for (int i=0; i<=N; i++) {
        for (int j=0; j<=N-i; j++) { //紙幣の枚数が与えられていないときはカウンタ変数を活用すること
            int k = N-i-j;
            if (Y == 10000*i+5000*j+1000*k) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}    