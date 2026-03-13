#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  
  int thousands_place = N/1000;
  int hundreds_place = (N%1000)/100;
  int tens_place = (N%1000)%100/10;
  int ones_place = (N%1000)%100%10;
  
  if (thousands_place == hundreds_place && hundreds_place == tens_place) {
    cout << "Yes" << endl;
  }
  
  else if (hundreds_place == tens_place && tens_place == ones_place) {
    cout << "Yes" << endl;
  }
  
  else {
    cout << "No" << endl;
  }
}