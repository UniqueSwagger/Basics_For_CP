#include <climits>
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  int n;
  cin >> n;
  ll nums[n];
  int min = INT_MAX;
  int max = INT_MIN;
  int min_idx;
  int max_idx;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  for (int i = 0; i < n; i++) {
    if (nums[i] < min) {
      min_idx = i;
      min = nums[i];
    }
    if (nums[i] > max) {
      max_idx = i;
      max = nums[i];
    }
  }
  swap(nums[min_idx], nums[max_idx]);
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}