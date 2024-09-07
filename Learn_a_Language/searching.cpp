#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  ll n;
  cin >> n;
  ll nums[n];
  for (ll i = 0; i < n; i++) {
    cin >> nums[i];
  }
  ll target;
  cin >> target;
  for (ll i = 0; i < n; i++) {
    if (nums[i] == target) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}