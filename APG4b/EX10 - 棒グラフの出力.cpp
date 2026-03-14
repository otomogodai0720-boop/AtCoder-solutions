#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  
  int i = 0;
  
  cout << "A:";
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;
  
  i = 0;  //ここでiを0にリセットしないとAで使われた最終的なiの値のままになってしまうので注意
  cout << "B:";
  while (i < B) {
    cout << "]";
    i++;
  }
  cout << endl;
}