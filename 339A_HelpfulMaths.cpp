#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    if (cin >> s) {
        vector<char> digits;
        for (char c : s) {
            if (c != '+') digits.push_back(c);
        }
        sort(digits.begin(), digits.end());
        for (size_t i = 0; i < digits.size(); i++) {
            cout << digits[i] << (i + 1 == digits.size() ? "" : "+");
        }
        cout << "\n";
    }
    return 0;
}
