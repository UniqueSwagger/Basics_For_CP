#include <climits>
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll nums[n];
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    int min = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int currMin = nums[i] + nums[j] + j - i;
        if (currMin < min) {
          min = currMin;
        }
      }
    }
    cout << min << endl;
  }

  return 0;
}