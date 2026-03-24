#include <iostream>
#include <cmath>
#include <cstdio> // printfを使うため

using namespace std;

int main() {
    double d;
    if (!(cin >> d)) return 0;

    // 半径を正確に計算し、M_PI（または acos(-1.0)）を掛ける
    double r = d / 2.0;
    double ans = r * r * M_PI;

    // 小数点以下15桁まで正確に出力する（これが一番確実！）
    printf("%.15f\n", ans);
    
    return 0;
}