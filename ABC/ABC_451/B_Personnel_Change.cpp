#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(n);

    rep(i,n) cin >> A.at(i) >> B.at(i);

    rep(i,m){
        int sumA = 0;
        int sumB = 0;
       rep(j,n) {
          if (A[j] == i+1) sumA++;
          if (B[j] == i+1) sumB++;
       }
        cout << sumB - sumA << endl;
    }

    return 0;
}