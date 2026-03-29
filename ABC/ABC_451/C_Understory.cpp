#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int Q;
    cin >> Q;
    //vectorを使用した場合、要素の自動整列が行われないため、一番小さい要素を探すときに全ての要素を見て比較してやらなければいけなくなる。しかし、これでは計算量が大きくなってしまうため、priority_queueを使用している。
    //priority_queueでは配列の一番左に要素の中で最も大きい、または小さい値が持ってこられる。（全ての要素を小さい順、大きい順に並べ替えているわけではない）
    priority_queue<int,vector<int>,greater<int>> q; //初期値が設定されていない要素数０の箱[]を用意しただけ
    rep(qi,Q) {
        int type, h;
        cin >> type >> h;
        if (type == 1) {
            q.push(h); //cin >> q[i];とする必要はなく、配列の中に投げ込むだけで良い
        }
        else {
            while (q.size() && q.top() <= h) { //qの要素数が０でなく、qの中の一番小さい値（配列の中では一番左側の値）がh以下の時
                q.pop(); //qからその値（[0]番目）を取り出す
            }
        }
        cout << q.size() << '\n'; //要素数が木の本数に等しい
    }
    return 0;
}