#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X,Y,sum=0;
        cin >> X >> Y;
        if (X>Y)
        {
            for (int i = Y+1; i < X; i++)
            {
                if (i%2)
                {
                    sum+=i;
                }
            }
        }
        else
        {
            for (int i = X+1; i < Y; i++)
            {
                if (i%2)
                {
                    sum+=i;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}