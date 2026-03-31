#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int n, k;
    cin >> n >> k;

    int beans = 0;
    int ans = -1;
    int age = n;
    
    while (beans < k) {
        beans += age;
        age++;
        ans++;
    }
    cout << ans << endl;
    return 0;
}