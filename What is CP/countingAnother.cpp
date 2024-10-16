#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int res = b > a ? (b - a + 1) : 0;
  cout << res << endl;
  return 0;
}