#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, remainder;
  cin >> N >> A;
  
  remainder = N % 500;
  
  if (A >= remainder) {
    cout << "Yes" << endl;
  }
  
  else {
    cout << "No" << endl;
  }
  
}