#include <iostream>
#include <string>
#include <set>
using namespace std;

bool hasDistinctDigits(int y) {
    string s = to_string(y);
    set<char> st(s.begin(), s.end());
    return st.size() == s.length();
}

int main() {
    int y;
    if (cin >> y) {
        y++;
        while (!hasDistinctDigits(y)) {
            y++;
        }
        cout << y << "\n";
    }
    return 0;
}
