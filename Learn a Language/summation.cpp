#include<iostream>
using namespace std;

int main()
{
    long long n,sum=0;
    cin >> n;
    long long nums[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (long long i = 0; i < n; i++)
    {
        sum+=nums[i];
    }
    cout << abs(sum) << endl;
    return 0;
}