#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    char S,Q;
    cin >> A>>S>>B>>Q>>C;
    switch (S)
    {
        case '+':
            if(A+B==C)
                cout << "Yes" << endl;
            else cout << A+B << endl;
            break;
        case '-':
            if(A-B==C)
                cout << "Yes" << endl;
            else cout << A-B << endl;
            break;
        case '*':
            if(A*B==C)
                cout << "Yes" << endl;
            else cout << A*B << endl;
            break;
    }
    return 0;
}