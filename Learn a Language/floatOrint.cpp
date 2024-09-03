#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(3);
    float N;
    cin >> N;
    int num1 = (int)N;
    float num2=N-num1;
    if (!num2)
    {
        cout << "int " << num1 << endl;
    }
    else cout << "float " << num1 << " " << num2 << endl;
    return 0;
}