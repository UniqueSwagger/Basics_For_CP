#include <climits>
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
  ll max = INT_MIN;
  for (ll i = 0; i < n; i++) {
    if (nums[i] > max) {
      max = nums[i];
    }
  }
  cout << max << endl;
  return 0;
}