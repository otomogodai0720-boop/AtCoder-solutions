#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;

    vector<tuple<string, int, int>> vec;

    rep(i,n) {
        string s;
        int p;
        cin >> s >> p;
        tuple<string, int, int> data(s, -p, i);
        vec.push_back(data);
    }

    sort(vec.begin(), vec.end());

    rep(i,n) {
        string s;
        int p,j;
        tie(s, p, j) = vec[i];
        cout << j+1 << '\n';
    }
    return 0;
}