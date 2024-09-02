#include<iostream>
#include<iomanip>
using namespace std;
// (a×b)%m=[(a%m)×(b%m)]%m . This is the property of modular arithmetic 
int main()
{
    int A,B,C,D,r;
    cin >> A >> B >> C >> D;
    r=(A%100*B%100*C%100*D%100)%100;
    cout << setw(2) << setfill('0') <<  r << endl;
    return 0;
}

