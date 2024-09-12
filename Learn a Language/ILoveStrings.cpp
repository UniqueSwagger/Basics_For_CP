#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string s, t, res;
    cin >> s >> t;
    int i = 0;
    bool sEmpty = false;
    bool tEmpty = false;
    while (s[i] || t[i]) {
      if (s[i] && !sEmpty) {
        res += s[i];
      } else
        sEmpty = true;
      if (t[i] && !tEmpty) {
        res += t[i];
      } else
        tEmpty = true;
      ++i;
    }
    cout << res << endl;
  }

  return 0;
}