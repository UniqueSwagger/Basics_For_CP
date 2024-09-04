#include<iostream>
using namespace std;

bool isOdd(int num){
    if(num%2){
        return true;
    }
    else return false;
}
bool isPalindrome(int num){
    string strBin;
    while (num)
    {
        strBin+=to_string(num%2);
        num/=2;
    }
    string newStrBin;
    for (int i = strBin.length()-1; i >= 0; --i)
    {
        newStrBin+=strBin[i];
    }
    if (strBin==newStrBin)
    {
        return true;
    }
    else return false;
}
int main()
{
    int N;
    cin >> N;
    if (isOdd(N)&&isPalindrome(N))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}