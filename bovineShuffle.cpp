#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<array<int, 2>> v;
  for (int i = 0; i < n; i++) {
    array<int, 2> a;
    cin >> a[0];
    v.push_back(a);
  }
  cin.ignore();
  for (int i = 0; i < n; i++) {
    cin >> v[i][1];
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[j][0] == i) cout << v[j][1] << endl;
    }
  }

  return 0;
}