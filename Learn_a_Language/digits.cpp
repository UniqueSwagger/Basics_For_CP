#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        string s= to_string(N);
        for (int i = (s.length()-1); i >= 0; --i)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}