#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string S;
    cin >> S;

    S.at(0) = std::tolower(S.at(0));
    cout << "Of" << S << endl;

    return 0;
}