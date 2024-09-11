#include <iostream>
using namespace std;

int main() {
  int n, pd = 0, sd = 0;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        pd += arr[i][j];
      }
      if (j == n - i - 1) {
        sd += arr[i][j];
      }
    }
  }

  cout << abs(pd - sd) << endl;
  return 0;
}