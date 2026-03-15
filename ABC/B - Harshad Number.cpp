#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int original_N = N;
  int sum = 0;
  
  while (N>0) {
    sum += N%10;
    N /=10;
  }
  
  if (original_N % sum == 0) {
    cout << "Yes" << endl;
  }
  
  else {
    cout << "No" << endl;
  }
}