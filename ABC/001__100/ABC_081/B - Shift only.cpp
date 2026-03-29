#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N;
  int min_count = 1000000000;  //初期値を十分に大きくしておく事によって最初のAを２で割る回数が19行目の条件に必ず当てはまるようにする
  
  for (int i=0; i<N; i++) {
    cin >> A;
    
    int current_count = 0;  //Aは毎回for文の中で最初に0に初期化される
    
    while (A%2 == 0) {
    A /= 2;
    current_count++;
    }
    
    if (current_count < min_count) {
      min_count = current_count;
    }
  }
  cout << min_count << endl;  //複数のAの中で２で割ることのできる回数が最も少ないものの２で割った回数を出力する
    return 0;
}