#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    rep(i,n) cin >> a[i];
    a.push_back(t); //終業時刻tに青木くんが通りかかってくれるとすると問題が解きやすくなる

    bool open = true; //問題を解く上で知りたい情報はなんなのかを考えて解くことが重要
    int open_time = 0;

    int ans = 0;
    for (int na : a) { //1秒ごとにチェックしていくやり方だとO(T)で計算量が多くて、TLEになってしまう可能性があるのでnの方でfor文を回すといくことを考える
        if (!open) {
            if (open_time < na) open = true;
        }
        if (open) {
            ans += na-open_time;
            open = false;
            open_time = na+100;
        }
    }
    cout << ans << endl;
    return 0;
}