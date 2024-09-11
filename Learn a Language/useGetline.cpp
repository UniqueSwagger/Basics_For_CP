#include <iostream>
using namespace std;

int main() {
  string s, res;
  getline(cin, s);
  for (char c : s) {
    if (c != '\\') {
      res += c;
    } else
      break;
  }
  cout << res << endl;
  return 0;
}

// to detect single backslash ,
//need to use double backslashes
// , \\ interpreted as a single backslash
// because backslash is an escape char in string literals.
