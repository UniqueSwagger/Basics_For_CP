#include<iostream>
using namespace std;

int main()
{
    char s;
    cin >> s;
    int ascii=(int)s;
    if (ascii<65 )
    {
        cout << "IS DIGIT" << endl;
    } 
    else
    {
        cout << "ALPHA" << endl;
        if (ascii>96)
        {
            cout << "IS SMALL" << endl;
        }
        else cout << "IS CAPITAL" << endl;
    }
    return 0;
}