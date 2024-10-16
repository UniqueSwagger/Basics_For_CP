#include <iostream>
using namespace std;

int main() {
  int a, b, t, total = 0, i = 1;
  cin >> a >> b >> t;
  const int temp = a;
  while (a < (t + 0.5)) {
    total += b;
    ++i;
    a = i * temp;
  }
  cout << total << endl;
  return 0;
}