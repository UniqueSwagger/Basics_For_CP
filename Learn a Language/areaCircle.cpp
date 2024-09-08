#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    const double pi=3.141592653;
    double R;
    cin >> R;
    cout << pi*R*R << endl;
    return 0;
}