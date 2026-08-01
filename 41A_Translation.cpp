#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    if (cin >> s >> t) {
        reverse(s.begin(), s.end());
        if (s == t) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
