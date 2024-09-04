#include<iostream>
using namespace std;

int main()
{
    long long A,B,C,min,max;
    cin >> A >> B >> C;
    if (A<=B && A <=C)
    {
        min=A;
    }
    else if (B<=A&&B<=C)
    {
        min=B;
    }
    else min=C;

    if (A>=B&&A>=C)
    {
        max=A;
    }
    else if (B>=A&&B>=C)
    {
        max=B;
    }
    else max=C;
    cout << min << " " << max << endl;
    return 0;
}