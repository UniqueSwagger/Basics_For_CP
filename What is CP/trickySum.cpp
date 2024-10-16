#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll sum = 0;
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2) {
      sum += i;
    }
    cout << (n * (n + 1) / 2)-sum*2 << endl;
  }

  return 0;
}

// if a number n is a power of 2
// then bitwise & of n and n-1 will be zero.