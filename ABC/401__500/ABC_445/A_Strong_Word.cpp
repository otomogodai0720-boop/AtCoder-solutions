#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int last_num = S.size()-1;

    if (S.at(0) == S.at(last_num)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}