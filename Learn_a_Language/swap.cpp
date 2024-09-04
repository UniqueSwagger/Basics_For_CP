#include<iostream>
using namespace std;

void afterSwap(int &X,int &Y){
    swap(X,Y);
}
int main()
{
    int X,Y;
    cin >> X >> Y;
    afterSwap(X,Y);
    cout << X << " " << Y << endl;
    return 0;
}