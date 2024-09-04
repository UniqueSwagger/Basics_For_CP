#include<iostream>
using namespace std;

int main()
{
    int A ,B;
    cin >> A >> B;
    string res=((A%B)==0||(B%A)==0)?"Multiples" : "No Multiples";
    cout << res << endl;
    return 0;
}