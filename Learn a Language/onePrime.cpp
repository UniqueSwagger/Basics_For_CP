#include<iostream>
using namespace std;

int main()
{
    int X;
    bool isPrime=true;
    cin >> X;
    for (int i = 2; i < X; i++)
    {
        if (X%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}