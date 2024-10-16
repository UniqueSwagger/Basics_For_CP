#include <iostream>
using namespace std;

int main() {
  int y;
  cin >> y;
  ++y;
  while (true) {
    bool isDistinct = true;
    string s = to_string(y);
    for (int i = 0; i < s.length() - 1; i++) {
      for (int j = i + 1; j <= s.length(); j++) {
        if (s[i] == s[j]) {
          ++y;
          isDistinct = false;
        }
      }
    }
    if (isDistinct) {
      cout << y << endl;
      break;
    }
  }

  return 0;
}