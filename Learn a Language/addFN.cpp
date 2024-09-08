#include<iostream>
using namespace std;
int summation(int X,int Y){
    return (X+Y);
}
int main()
{
    int X,Y;
    cin >> X >> Y;
    cout << summation(X,Y) << endl;
    return 0;
}