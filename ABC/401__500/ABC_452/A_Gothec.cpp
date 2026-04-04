#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int m, d;
    cin >> m >> d;
    
    if (m==1 && d==7) cout << "Yes" << endl; 
    else if (m==3 && d==3) cout << "Yes" << endl;
    else if (m==5 && d==5) cout << "Yes" << endl;
    else if (m==7 && d==7) cout << "Yes" << endl;
    else if (m==9 && d==9) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}