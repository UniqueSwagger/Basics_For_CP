#include <iostream>
using namespace std;

int main() {
  int n, m;
  bool exist = false;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  int x;
  cin >> x;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == x) {
        exist = true;
        break;
      }
    }
  }
  if (exist)
    cout << "will not take number" << endl;
  else
    cout << "will take number" << endl;
  return 0;
}