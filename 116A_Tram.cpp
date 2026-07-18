#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (cin >> n) {
        int current = 0, max_capacity = 0;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            current -= a;
            current += b;
            max_capacity = max(max_capacity, current);
        }
        cout << max_capacity << "\n";
    }
    return 0;
}
