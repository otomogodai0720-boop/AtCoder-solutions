#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  
  int count = 0;
  
  for (int i=A; i <= B; i++) {
    int ones = i%10;
    int tens = i/10%10;
    int thousands = i/1000%10;
    int ten_thousands = i/10000%10;
    
    if (ones == ten_thousands && tens == thousands) {
      count += 1;
    }
    
    A +=1;
  }
  cout << count << endl;
  return 0;
}