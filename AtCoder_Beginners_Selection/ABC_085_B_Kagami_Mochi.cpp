#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> d(N);
    for (int i=0; i<N; i++) cin >> d.at(i);

    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());

    int ans = 0;

    for (int i=0; i+1<N; i++) {
        if (d.at(i) > d.at(i+1)) ans++;
    }

    cout << ans+1 << endl; //最初の最も直径の大きい餅の１段分を足す
    return 0;
}