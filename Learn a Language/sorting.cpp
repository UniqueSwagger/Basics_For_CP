#include <iostream>
using namespace std;
void selectionSort(int nums[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (nums[j] < nums[min_index]) {
        min_index = j;
      }
    }
    if (min_index != i) {
      swap(nums[i], nums[min_index]);
    }
  }
}
int main() {
  int n;
  cin >> n;
  int nums[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  selectionSort(nums, n);
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}