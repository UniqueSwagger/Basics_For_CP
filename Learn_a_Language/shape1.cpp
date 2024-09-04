#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N)
    {
        string s="";
        for (int i = 0; i < N; i++)
        {
            s+="*";
        }
        cout << s << endl;
        --N;
    }
    return 0;
}