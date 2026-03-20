#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> score(N);
  int sum=0;
  
  for (int i=0; i<N; i++) {
    cin >> score.at(i);
    sum +=score.at(i);
  }
  int ave = sum/N;
  
  for (int j=0;j<N;j++) {
    if (score.at(j) > ave) cout << score.at(j)-ave << endl;
    else cout << ave-score.at(j) << endl;
  }
  return 0;
}