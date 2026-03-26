#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0; i<N; i++) cin >> A.at(i);

    int ans = 1000000;

    
    for (int i=0; i<N; i++) {
        int sum = 0;
        while (A.at(i)%2 == 0) {
            A.at(i) /=2;
            sum++;
        }

        if (ans > sum) ans = sum;
    }

    cout << ans << endl;
    return 0;
}