#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
  int n;
  int m;
  cin >> n >> m;
  cin.ignore();
  vector<array<int, 2>> v1;
  vector<array<int, 2>> v2;
  for (int i = 0; i < n; i++) {
    array<int, 2> a{};
    cin >> a[0] >> a[1];
    cin.ignore();
    v1.push_back(a);
  }

  for (int i = 0; i < m; i++) {
    array<int, 2> a{};
    cin >> a[0] >> a[1];
    cin.ignore();
    v2.push_back(a);
  }

  int max = 0;
  int size1 = v1.size();
  int size2 = v2.size();
  for (int i = 0, j = 0, k = 0, l = v1[0][0], m = v2[0][0]; i < 100; i++) {
    int diff = v2[k][1] - v1[j][1];
    if (diff > max) max = diff;
    if (i >= v1[j][0]) {
      j++;
      if (j < size1) l += v1[j][0];
      else l = 100;
    }
    if (i >= v2[k][0]) {
      k++;
      if (k < size2) m += v2[k][0];
      else l = 100;
    }
    if (j >= size1 || k >= size2) break;
  }

  cout << max << endl;

  return 0;
}