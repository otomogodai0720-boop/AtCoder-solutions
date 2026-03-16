#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  
  cin >> s;
  
  int s1 = s/100;
  int s2 = (s/10)%10;
  int s3 = s%10;
  
  int result = s1+s2+s3;
  
  cout << result << endl;
  
}