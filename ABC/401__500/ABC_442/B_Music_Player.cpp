#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++) 

int main() {
    int q;
    cin >> q;

    int volume = 0;
    bool music = false;
    rep(i,q) {
        int a;
        cin >> a;
        if (a == 1) volume++;
        else if (a == 2 && volume >=1) volume--;
        else if (a == 3) {
            if (!music) music = true;
            else if(music) music = false;
        }
    if (volume >= 3 && music) cout << "Yes" << endl;
    else cout << "No" << endl;
    }
    return 0;
}