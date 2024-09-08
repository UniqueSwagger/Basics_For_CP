#include<iostream>
using namespace std;

int main()
{
    int X;
    while (cin>>X)
    {
        if (X==1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else cout << "Wrong" << endl;
    }
    return 0;
}