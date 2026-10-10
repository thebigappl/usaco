#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int m;
  int n;
  int k;
  cin >> m >> n >> k;
  cin.ignore();

  vector<string> v;
  for (int i = 0; i < m; i++) {
    string str = "";
    char line[10];
    cin.getline(line, 10);
    for (int j = 0; j < n; j++) {
      string newChar(1, line[j]);
      for (int l = 0; l < k; l++) {
        str.append(newChar);
      }
    }
    for (int j = 0; j < k; j++) {
      v.push_back(str);
    }
  }

  int l = k * m;
  for (int i = 0; i < l; i++) {
    cout << v[i] << endl;
  }


  return 0;
}