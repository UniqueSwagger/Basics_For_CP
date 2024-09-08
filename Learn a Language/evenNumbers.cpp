#include<iostream>
using namespace std;

int main()
{
    int N,count=0;
    cin >> N;
    for (int i = 1; i <=N; i++)
    {
        if (i%2==0)
        {
            cout << i << endl;
            count++;
        }
    }
    if(count==0) cout << -1 << endl;
    return 0;
}