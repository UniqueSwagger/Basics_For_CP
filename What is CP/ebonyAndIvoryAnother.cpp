#include <iostream>
using namespace std;
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
bool hasPositiveSolution(int a, int b, int c) {
  int g = gcd(a, b);
  if (c % g != 0) return false;
  for (int x = 0; x <= c / a; x++) {
    int rem = c - (a * x);
    if (rem % b == 0) {
      int y = rem / b;
      if (y >= 0) return true;
    }
  }
  return false;
}
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (hasPositiveSolution(a, b, c))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}