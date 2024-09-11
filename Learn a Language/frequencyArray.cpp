#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  ll n, m;
  cin >> n >> m;
  ll nums[n];
  ll freq[m + 1] = {0};
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    if (nums[i] >= 1 && nums[i] <= m) {
      freq[nums[i]]++;
    }
  }
  for (int i = 1; i <= m; i++) {
    cout << freq[i] << endl;
  }

  return 0;
}