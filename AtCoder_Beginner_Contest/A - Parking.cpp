#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, N;
  cin >> N >> A >> B;
  
  int fee1 = A*N;
  
  if (fee1 >= B) {
    cout << B << endl;
  }
  else {
    cout << fee1 << endl;
  }
}