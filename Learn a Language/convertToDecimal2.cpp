#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        bitset<32> binary(N);
        string s= binary.to_string();
        string contain1="";
        for (char c:s)
        {
            if (c=='1')
            {
                contain1+='1';
            }
        }
        cout << stoi(contain1,0,2) << endl;
    }
    return 0;
}