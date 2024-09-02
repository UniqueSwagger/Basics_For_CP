#include<iostream>
using namespace std;

int main()
{
    char s;
    cin >> s;
    int ch=(int)s>96 ? (int)s-32 : (int)s+32;
    cout << (char)ch << endl;
    return 0;
}