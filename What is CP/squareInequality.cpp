#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (pow(c, 2) > pow(a, 2) + pow(b, 2)) {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
  return 0;
}