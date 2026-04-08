#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string x, y;
    cin >> x >> y;

   map<string,int> version;
   version["Ocelot"] = 0;
   version["Serval"] = 1;
   version["Lynx"] = 2;

   if (version[x] >= version[y]) cout << "Yes" << endl;
   else cout << "No" << endl;
    return 0;
}
