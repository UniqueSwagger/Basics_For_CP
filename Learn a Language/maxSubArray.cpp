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
    for (int i = 0; i < n; i++) {
      int currMax = INT_MIN;
      for (int j = i; j < n; j++) {
        if (nums[j] > currMax) {
          cout << nums[j] << " ";
          currMax = nums[j];
        } else
          cout << currMax << " ";
      }
    }
    cout << endl;
  }
  return 0;
}