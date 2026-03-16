#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int Initial_value = 1;
  
 for (int i=0; i<N; i++) {
   if (Initial_value*2 < Initial_value+K) {
     Initial_value *= 2;
   }
   else {
     Initial_value += K;
   }
 }
 int ans = Initial_value;
 cout << ans << endl;
 return 0;
}