#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  int n;
  cin >> n;
  ll nums[n];
  for (ll i = 0; i < n; i++) {
    cin >> nums[i];
  }
  for (ll i = 0; i < n; i++) {
    ll* value = &nums[i];
    if (nums[i] > 0) {
      *value = 1;
    } else if (nums[i] < 0) {
      *value = 2;
    } else
      *value = 0;
  }
  for (ll i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}