#include <iostream>
typedef long long ll;
using namespace std;

int main() {
  ll n, m;
  cin >> n >> m;
  ll a[n];
  ll b[m];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int seqIdx = 0;
  for (auto num : a) {
    if (seqIdx == m) break;
    if (b[seqIdx] == num) seqIdx += 1;
  }
  if (seqIdx == m) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;
  return 0;
}