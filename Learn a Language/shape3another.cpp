#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int maxStars=2*N-1;
    for (int i = 1; i <= maxStars; i+=2)
    {
        for (int j=1;j<=(maxStars-i)/2;j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = maxStars; i >= 1; i-=2)
    {
        for (int j = (maxStars-i)/2; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}