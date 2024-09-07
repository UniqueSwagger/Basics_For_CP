#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, A, B, sum = 0, sumDigit = 0;
  cin >> N >> A >> B;
  vector<int> nums;
  for (int i = A; i <= B; i++) {
    nums.push_back(i);
  }
  for (int i = A; i <= N; i++) {
    string s = to_string(i);
    for (int j = 0; j < s.length(); ++j) {
      sumDigit += (s[j] - '0');
    }
    for (int k = 0; k < nums.size(); ++k) {
      if (sumDigit == nums[k]) {
        sum += i;
      }
    }
    sumDigit = 0;
  }
  cout << sum << endl;
  return 0;
}