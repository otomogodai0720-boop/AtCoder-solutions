#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int Initial_value = 1; //最初からInitial_valueではなく、現在の値という意味でcurを変数の名前にしておけば17行目でansに変える必要がなくなるのでよりシンプルにできる
  
 for (int i=0; i<N; i++) {
   if (Initial_value*2 < Initial_value+K) {  //if文の条件はInitial_value < Kの方がシンプルである   
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
