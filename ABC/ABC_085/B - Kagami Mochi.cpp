#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> d(N);
  int sum = 1;
  
  for (int i=0; i<N; i++) cin >> d.at(i);
  
  sort(d.begin(),d.end());
  reverse(d.begin(),d.end());
  
  int cur = d.at(0); //この行を入れる位置に注意。最初は8行目の後に入れていた。
  
  for (int j=0; j<N; j++){
    if (cur>d.at(j)) {
      sum +=1;
      cur = d.at(j);
    }
  }
  cout << sum << endl;
  return 0;
}