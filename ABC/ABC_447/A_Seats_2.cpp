#include <iostream>
using namespace std;

int main() {
int N, M;
cin >> N >> M;

if (N%2 == 0) {
    if (M <= N/2) cout << "Yes" << endl;
    else cout << "No" << endl;
}

else {
    if (M <= N/2 + 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}

return 0;

}