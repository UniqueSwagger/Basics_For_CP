#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  if ((s[0] - '0') % 2 == 0) {
    cout << "EVEN" << endl;
  } else
    cout << "ODD" << endl;
  return 0;
}