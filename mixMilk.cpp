#include <iostream>
#include <array>

#define N_COWS 3
#define N_MIXES 100

using namespace std;

int main() {
  array<array<int, 2>, N_COWS> milk;

  for (int i = 0; i < N_COWS; i++) {
    cin >> milk[i][0] >> milk[i][1];
  }

  for (int i = 0; i < N_MIXES; i++) {
    int curr = i % N_COWS;
    int next = (curr + 1) % N_COWS;
    int amt = milk[curr][1];
    if (amt + milk[next][1] > milk[next][0]) amt = milk[next][0] - milk[next][1];
    milk[curr][1] -= amt, milk[next][1] += amt;
  }

  for (int i = 0; i < N_COWS; i++) {
    cout << milk[i][1] << endl;
  }

  return 0;
}