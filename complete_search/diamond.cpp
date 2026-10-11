#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    unordered_set<int> s;
    int max_d = 0, l = 0;

    for (int &t : v) cin >> t;

    sort(v.begin(), v.end());

    for (int r = 0; r < n; r++) {
        while (v[r] - v[l] > k) l++;
        
        max_d = max(max_d, r - l + 1);
    }

    cout << max_d << endl;

    return 0;
}