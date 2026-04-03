#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string x;
    cin >> x;
    sort(x.begin(),x.end());
   
    int i = 0;
    int k = 0;
    while (x[i] == '0') {
        i++; k++;
    }
    if (k != 0) {
        x[0] = x[k];
        x[k] = '0';
    }
    cout << x << endl;
    return 0;
}