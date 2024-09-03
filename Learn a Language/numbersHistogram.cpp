#include<iostream>
using namespace std;

int main()
{
    char S;
    cin >>S;
    int N;
    cin >> N;
    while (N--)
    {
        int X;
        cin >> X;
        for (int i = 0; i < X; i++)
        {
            cout << S;
        }
        cout << endl;
    }

    return 0;
}