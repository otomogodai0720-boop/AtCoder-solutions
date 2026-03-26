#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;

    for (int i=1; i<=N; i++) {
        string num = std::to_string(i); //int型になっているiをstring型に変換
        int sum_dig = 0;

        for (int j=0; j<num.size(); j++) {
            sum_dig += int (num.at(j)-'0'); //num.at(j)はchar型で文字になっているので'0'を引く事によって数字に変換する（char型からint型への変換）
        }

        if (A <= sum_dig && sum_dig <= B) ans += i;
    }

    cout << ans << endl;
    return 0;
}