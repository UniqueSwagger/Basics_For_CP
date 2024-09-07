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

  ll min = INT_MAX;
  ll minIndex;
  for (ll i = 0; i < n; i++) {
    if (nums[i] < min) {
      min = nums[i];
      minIndex = i + 1;
    }
  }
  cout << min << " " << minIndex << endl;
  return 0;
}