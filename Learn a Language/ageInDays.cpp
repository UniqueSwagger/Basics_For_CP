#include<iostream>
using namespace std;

int main()
{
    long long N,years=0,months=0,days=0;
    cin >> N;
    if (N>=365)
    {
        years=N/365;
        N=N%365;
        months=N/30;
        N=N%30;
        days=N;
    }
    else if (N>=30)
    {
        months=N/30;
        N=N%30;
        days=N;
    }
    else
    {
        days=N;
    }
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}