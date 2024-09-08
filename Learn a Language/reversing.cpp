#include<iostream>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll nums[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (ll i = n-1; i >=0 ; --i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}