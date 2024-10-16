#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0)
#define d double
using namespace std;

int main() {
  fast;
  int n, k;
  cin >> n >> k;
  int maxAnd = 0;
  int maxOr = 0;
  int maxXor = 0;
  for (int i = 1; i <= n - 1; ++i) {
    for (int j = i + 1; j <= n; ++j) {
      if ((i & j) > maxAnd && (i & j) < k) maxAnd = (i & j);
      if ((i | j) > maxOr && (i | j) < k) maxOr = (i | j);
      if ((i ^ j) > maxXor && (i ^ j) < k) maxXor = (i ^ j);
    }
  }
  cout << maxAnd << "\n";
  cout << maxOr << "\n";
  cout << maxXor << "\n";
  return 0;
}