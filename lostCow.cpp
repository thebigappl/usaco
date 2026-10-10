#include <iostream>

using namespace std;

int main() {
  int x;
  int y;
  cin >> x >> y;
  int z = x, last = x, i = 1, cumDist = 0;
  int dist2 = y - x;
  while (z != y) {
    z = x + i;
    int dist1 = z - x;
    if ((dist2 < 0 && dist1 < dist2) || (dist2 > 0 && dist1 > dist2)) z = y;
    cumDist += abs(z - last);
    i *= -2;
    last = z;
  }

  cout << cumDist << endl;

  return 0;
}