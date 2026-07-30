#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long k, n, w;
    if (cin >> k >> n >> w) {
        long long total_cost = k * w * (w + 1) / 2;
        long long borrow = max(0LL, total_cost - n);
        cout << borrow << "\n";
    }
    return 0;
}
