#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  int count_plus=0;
  int count_minus=0;
  
  for (int i=0; i<S.size(); i++) {
    if (S.at(i) == '+') {
      count_plus ++;
    }
    
    if (S.at(i) == '-') {
      count_minus ++;
    }
  }
  int sum = 1+count_plus-count_minus;
  cout << sum << endl;
  return 0;
}