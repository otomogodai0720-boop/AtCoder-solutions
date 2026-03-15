#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, l, r;
  cin >> N;
  int number = 0;  //足し合わせて合計を求めるような問題ではこのように初期値を0に設定しておくこと
  
  for (int i=0; i<N; i++) {
    cin >> l >> r;
    number += (r-l+1);
    
  }
  cout << number << endl;
}