#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,N;
  cin >> N >> A;
  
  for (int i = 0; i < N; i++) {
    string op;
    int B;
    cin >> op >> B;
    
    if (op == "+") {
      A += B;
      cout << i+1 << ":" << A << endl;
    }
    
    else if (op == "-") {
      A -= B;
      cout << i+1 << ":" << A << endl;
    }
    
    else if (op == "*") {
      A *= B;
      cout << i+1 << ":" << A << endl;
    }
    
    else {
      if (B == 0) {
        cout << "error" << endl;
        break;
      }
      A /= B;
      cout << i+1 << ":" << A << endl;
    }
  }
}