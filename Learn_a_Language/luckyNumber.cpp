#include <iostream>
using namespace std;

int main() {
  int A, B, count = 0;
  bool notFound = true;
  string s;
  cin >> A >> B;
  for (int i = A; i <= B; i++) {
    s = to_string(i);
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '4' || s[i] == '7') {
        count++;
      }
    }
    if (count == s.length()) {
      cout << i << " ";
      notFound = false;
    }
    count = 0;
  }
  if (notFound) {
    cout << -1 << endl;
  }
  return 0;
}