#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  for (int i=0; i<N; i++) {
    string S;
    cin >> S;
    
    if (S == "Y") {
      cout << "Four" << endl;
      return 0;  //return 0;を書く事によってその場でmain関数が終了してくれる
    }
  }
  cout << "Three" << endl;
}