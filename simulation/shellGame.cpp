#include <iostream>
#include <vector>
#include <array>

using namespace std;

#define SIZE 3

int main() {
  int n;
  cin >> n;
  vector<array<int, SIZE>> v;
  for (int i = 0; i < n; i++) {
    array<int, SIZE> a{};
    for (int j = 0; j < SIZE; j++) {
      cin >> a[j];
    }
    v.push_back(a);
  }
  int max = 0;
  for (int i = 1; i <= SIZE; i++) {
    int loc = i;
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (v[j][0] == loc) loc = v[j][1];
      else if (v[j][1] == loc) loc = v[j][0];
      if (v[j][2] == loc) count++;
    }
    if (count > max) max = count;
  }
  cout << max << endl;

  return 0;
}