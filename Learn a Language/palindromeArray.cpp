#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  ll n;
  cin >> n;
  ll nums[n];
  ll revNums[n];
  bool isPalindrome = true;
  for (ll i = 0; i < n; i++) {
    cin >> nums[i];
  }
  for (ll i = 0; i < n; i++) {
    revNums[i] = nums[n - i - 1];
  }
  for (ll i = 0; i < n; i++) {
    if (nums[i] != revNums[i]) {
      isPalindrome = false;
      break;
    }
  }
  if (isPalindrome) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;
  return 0;
}