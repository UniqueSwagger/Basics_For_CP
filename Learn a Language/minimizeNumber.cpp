#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  int n, count = 0;
  bool even = true;
  cin >> n;
  ll nums[n];
  int size = n;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  while (even) {
    for (int i = 0; i < size; i++) {
      if (nums[i] % 2 != 0) {
        cout << count << endl;
        even = false;
        return 0;
      } else {
        nums[i] /= 2;
      }
    }
    ++count;
  }

  cout << count << endl;
  return 0;
}