#include <iostream>
using namespace std;

int main() {
  string res;
  cin >> res;
  if (res.length() == 4) {
    cout << res << endl;
  } else {
    while (res.length() < 4) {
      res = '0' + res;
    }
    cout << res << endl;
  }

  return 0;
}