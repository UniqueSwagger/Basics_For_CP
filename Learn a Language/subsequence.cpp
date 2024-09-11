#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  ll n, m;
  cin >> n >> m;
  ll a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll b[m];
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int seqIdx = 0;
  int arrIdx = 0;
  while (seqIdx < m && arrIdx < n) {
    if (a[arrIdx] == b[seqIdx]) seqIdx += 1;
    arrIdx += 1;
  }
  if (seqIdx == m) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;
}