#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main() {
  string s;
  map<char, int> ltCount;
  cin >> s;
  for (char ch : s) {
    ltCount[ch]++;
  }
  map<char, int>::iterator it = ltCount.begin();
  while (it != ltCount.end()) {
    cout << it->first << " : " << it->second << endl;
    ++it;
  }
  return 0;
}