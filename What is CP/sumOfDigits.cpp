#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int d = 0, count = 0;
  string s;
  cin >> s;
  if (s == "0") {
    cout << 0 << endl;
    return 0;
  }
  while (true) {
    if (s.length() == 1) break;
    for (char c : s) {
      d += (c - '0');
    }
    s = to_string(d);
    d = 0;
    count++;
  }
  cout << count << endl;
  return 0;
}