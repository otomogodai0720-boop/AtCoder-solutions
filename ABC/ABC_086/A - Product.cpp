#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int remainder = (a*b)%2;
  
  if (remainder == 0) {
    cout << "Even" << endl;
  }
  
  else {
    cout << "Odd" << endl;
  }
}