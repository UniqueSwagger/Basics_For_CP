#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  string hello = "Hello, ";
  string res = hello.append(s);
  cout << res << endl;
  return 0;
}