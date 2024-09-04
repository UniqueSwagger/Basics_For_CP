#include<iostream>
using namespace std;

int main()
{
   int N;
   cin >> N;
   string s="*";
   string space;
   while(N)
   {
        for (int j = 0; j < N-1; j++)
        {
            space+=" ";
        }
        cout << space+s << endl;
        s+="**";
        --N;
        space="";
   }     
    return 0;
}
