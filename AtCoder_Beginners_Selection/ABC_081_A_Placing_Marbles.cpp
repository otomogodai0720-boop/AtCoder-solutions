#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;

    for (int i=0; i<3; i++) {
        if (s.at(i) == '1') sum++; //s.at(i)はcharを返すので'1'とする必要がある
    }

    cout << sum << endl;
    return 0;
}