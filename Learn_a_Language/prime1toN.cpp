#include<iostream>
using namespace std;
bool isPrime(int num){
    for (int i = 2; i*i <=num; i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}