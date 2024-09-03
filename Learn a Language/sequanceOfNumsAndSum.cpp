#include<iostream>
using namespace std;

int main()
{
    int N,M;
    while (cin >> N >> M)
    {
        int sum=0;
        if (N<=0 || M<=0)
        {
            break;
        }
        if (N>M)
        {
            for (int i = M; i <= N; i++)
            {
                cout << i << " ";
                sum+=i;
            }
            cout << "sum =" << sum << endl;
        }
        else
        {
           for (int i = N; i <= M; i++)
            {
                cout << i << " ";
                sum+=i;
            }
            cout << "sum =" << sum << endl; 
        }

    }
    return 0;
}