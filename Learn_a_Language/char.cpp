#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (isupper(ch))
    {
        cout << (char)(tolower(ch)) << endl;
    }
    else cout << (char)(toupper(ch)) << endl;
    return 0;
}