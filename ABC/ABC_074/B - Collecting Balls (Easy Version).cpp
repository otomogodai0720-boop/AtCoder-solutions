#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int sum = 0;
  
 for (int i=0; i<N; i++) {
   int x;
   cin >> x;
   
   if (2*x < K) {
     sum += 2*x;
   }
   else {
     sum += (K-x)*2;
   }
 }
 cout << sum << endl;
 return 0;
 
}