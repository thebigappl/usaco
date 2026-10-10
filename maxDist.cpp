#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int points[n][2];
  for (int i = 0; i < n; i++) {
    cin >> points[i][0];
  }
  
  for (int i = 0; i < n; i++) {
    cin >> points[i][1];
  }
  int max = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int dx = points[i][0] - points[j][0];
      int dy = points[i][1] - points[j][1];
      int diste = dx * dx + dy * dy;
      if (diste > max) max = diste;
    }
  }

  cout << max << endl;


  return 0;
}