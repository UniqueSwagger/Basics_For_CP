#include <iostream>
#include <cmath>
using namespace std;

long long equation(long long x, long long n) {
  long long res = 0;
  const int base = x;
  for (int i = 2; i <= n; i += 2) {
    res+=pow(x,i);
  }
  return res;
}
int main() {
  long long X, N;
  cin >> X >> N;
  cout << equation(X, N) << endl;
  return 0;
}