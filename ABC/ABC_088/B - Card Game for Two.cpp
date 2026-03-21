#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  int alice = 0;
  int bob = 0;
  
  for (int i=0; i<N; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  
  for (int j=0; j<N; j++) {
    if (j%2 == 0) alice += a.at(j); //aliceは偶数番目を足し合わせていく
    else bob +=a.at(j); //bobは奇数番目を足し合わせていく
  }
  
  cout << alice-bob << endl;
  return 0;
}