#include <iostream>
using namespace std;

int main() {
  string s, res;
  cin >> s;
  for (char c : s) {
    if (isupper(c)) {
      res += tolower(c);
    } else if (c == ',') {
      res += " ";
    } else if (islower(c)) {
      res += toupper(c);
    }
  }
  cout << res << endl;
  return 0;
}