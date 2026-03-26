#include <iostream>
#include <string>
#include <cctype> //std::tolowerを使うために必要
using namespace std;

int main() {
    string S;
    cin >> S;

    S.at(0) = std::tolower(S.at(0)); //std::は名前衝突しないようにするためにつけている
    cout << "Of" << S << endl;

    return 0;
}