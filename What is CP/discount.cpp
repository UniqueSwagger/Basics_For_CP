#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << fixed << setprecision(18);
  long double a, b;
  cin >> a >> b;
  cout << ((a - b) / a) * 100 << endl;
  return 0;
}