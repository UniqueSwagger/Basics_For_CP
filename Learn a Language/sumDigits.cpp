#include <iostream>
using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  string s;
  cin >> s;
  for (char c : s) {
    sum += (c - '0');
  }
  cout << sum << endl;
  return 0;
}