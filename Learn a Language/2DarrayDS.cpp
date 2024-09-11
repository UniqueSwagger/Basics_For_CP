#include <climits>
#include <iostream>
using namespace std;

int main() {
  int arr[6][6];
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }
  }
  int maxSum = INT_MIN;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] +
                arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
      maxSum = max(sum, maxSum);
    }
  }
  cout << maxSum << endl;
  return 0;
}
