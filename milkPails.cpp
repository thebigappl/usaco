#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, m;
    cin >> x >> y >> m;
    int i = m / x;
    int j = 0;
    int max_milk = -1;

    while (i > 0) {
        max_milk = max(i * x + j * y, max_milk);
        j++;
        while (i * x + j * y > m) {
            i--;
        }
    }

    cout << max_milk << endl;

    return 0;
}