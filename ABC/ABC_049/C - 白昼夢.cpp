#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    while (!S.empty()) { //.empty()は要素が0個かどうかを返す
      if (S.ends_with("dreamer")) S.erase(S.size() - 7); //.ends_with("")は語尾が指定したものと一致するかどうかを返す
      else if (S.ends_with("dream") ) S.erase(S.size() - 5); //.erase(変数名.size() - 末尾から消したい数字）は末尾から指定した文字数消す
      else if (S.ends_with("eraser")) S.erase(S.size() - 6);
      else if (S.ends_with("erase")) S.erase(S.size() - 5);
      else {
          cout << "NO"; 
          return 0;
      }
    }
    cout << "YES" << endl;
}    