#include <iostream>
using namespace std;

int main() {
  int a, b, twice=0, once=0;
  cin >> a >> b;
  once = a + b;
  if (a > b) {
    twice = a + a - 1;
  } else if (b > a) {
    twice = b + b - 1;
  }
  if (once > twice) {
    cout << once << endl;
  } else
    cout << twice << endl;
  return 0;
}