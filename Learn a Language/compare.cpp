#include <iostream>
#include <string>
using namespace std;

int main() {
  string x, y;
  cin >> x >> y;
  if (x.compare(y) < 0) {
    cout << x << endl;
  } else if (x.compare(y) > 0) {
    cout << y << endl;
  } else
    cout << x << endl;
  return 0;
}