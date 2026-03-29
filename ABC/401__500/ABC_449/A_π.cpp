#include <iostream>
#include <cmath> //数学関数を使うためのヘッダ
#include <iomanip> //setprecisionを使うためのヘッダ
using namespace std;

int main(){
    int D;
    cin >> D;

    cout << fixed << setprecision(1000) << acos(-1.0)*D*D/4 << endl; 
    //fixedは小数点以下の桁数を指定するための関数です。
    //setprecisionは有効数字の桁数を指定するための関数ですが、fixedと組み合わせると小数点以下の桁数を指定することができます。

    return 0;
}