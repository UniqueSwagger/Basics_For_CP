#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s;
    cin >> s;
    if (isalpha(s))
    {
        cout << "ALPHA" << endl;
        if (isupper(s))
        {
            cout << "IS CAPITAL" << endl;
        }
        else cout << "IS SMALL" << endl;
    }
    else cout << "IS DIGIT" << endl;
    return 0;
}