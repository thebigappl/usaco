#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &t : v) {
        cin >> t;
    }

    int num_flowers = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += v[j];
            int len = j - i + 1;

            for (int k = i; k <= j; k++){
                if (v[k] * len == sum) {
                    num_flowers++;
                    break;
                }
            }
        }
    }

    cout << num_flowers << endl;

    return 0;
}