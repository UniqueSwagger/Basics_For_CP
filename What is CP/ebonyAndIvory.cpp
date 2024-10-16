#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 0; i <= c; i += a) {
    for (int j = 0; j <= c; j += b) {
      if (i + j == c) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}