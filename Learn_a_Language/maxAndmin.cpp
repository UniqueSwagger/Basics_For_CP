#include<iostream>
using namespace std;

int main()
{
    long long A,B,C;
    cin >> A >> B >> C;
    cout << min(A,min(B,C)) << " " << max(A,max(B,C)) << endl;
    return 0;
}