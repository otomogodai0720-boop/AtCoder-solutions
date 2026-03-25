#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string S;
    cin >> S;

    S.at(0) = static_cast<char>(std::tolower(static_cast<unsigned char>(S.at(0))));
    cout << "Of"+S << endl;

    return 0;
}