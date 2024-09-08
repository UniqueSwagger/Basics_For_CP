#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int fib[n];
  if (n == 1) {
    cout << 0 << " ";
  } else if (n == 2) {
    cout << 0 << " " << 1 << " ";
  } else {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++) {
      cout << fib[i] << " ";
    }
    cout << endl;
  }
  return 0;
}