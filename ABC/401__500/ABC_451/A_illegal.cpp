#include <iostream>
using namespace std;

int main() {
    string s;
    cin >>s;

    if (s.size() == 5 || s.size() == 10) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}