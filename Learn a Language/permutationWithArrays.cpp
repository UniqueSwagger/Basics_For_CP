#include <algorithm>
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  int n;
  bool isPermutation = true;
  cin >> n;
  ll numsA[n];
  ll numsB[n];
  ll sumA = 0, sumB = 0;
  for (int i = 0; i < n; i++) {
    cin >> numsA[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> numsB[i];
  }
  //   sort(&numsA[0], &numsA[n]);
  //   sort(&numsB[0], &numsB[n]);
  sort(numsA, numsA + n);
  sort(numsB, numsB + n);
  for (int i = 0; i < n; i++) {
    if (numsA[i] != numsB[i]) {
      isPermutation = false;
      break;
    }
  }
  if (isPermutation) {
    cout << "yes" << endl;
  } else
    cout << "no" << endl;
  return 0;
}