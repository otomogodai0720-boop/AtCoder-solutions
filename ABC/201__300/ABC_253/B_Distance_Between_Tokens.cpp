#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    vector<int> xy(4);
    rep(i,h) cin >> s[i];

    bool found = true;
    rep(i,h) {
        rep(j,w) {
            if (s[i][j] == 'o') {
                xy[0] = i;
                xy[1] = j;
                found = false;
            }
            if (!found) break;
        }
        if (!found) break;
    }

    for (int j=xy[1]+1; j<w; j++) {
        if (s[xy[0]][j] == 'o'){
            xy[2] = xy[0];
            xy[3] = j;
            found = true;
        }
    }

    for (int i=xy[0]+1; i<h; i++) {
        rep(j,w) {
            if (s[i][j] == 'o' && !found) {
                xy[2] = i;
                xy[3] = j;
            }
        }
    }
    int bigger_x = max(xy[0], xy[2]);
    int smaller_x = min(xy[0], xy[2]);
    int bigger_y = max(xy[1], xy[3]);
    int smaller_y = min(xy[1], xy[3]);

    int ans = bigger_x - smaller_x + bigger_y - smaller_y;
    cout << ans << endl;
    return 0;

}