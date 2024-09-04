#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        long long f=1;
        for (int i = N; i>0; --i)
        {
            f*=i;
        }
        cout << f << endl;
    }
    return 0;
}