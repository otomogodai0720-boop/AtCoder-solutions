#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,X;
    cin >> N >> X;
    vector<int> A(N);

    for (int i=0; i<N; i++) cin >> A.at(i);

    for (int i=0; i<N; i++) {
        if (A.at(i) < X) {
            X = A.at(i);
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}