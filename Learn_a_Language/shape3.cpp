#include<iostream>
#include<vector>
using namespace std;

int main()
{
   int N;
   cin >> N;
   int count=N;
   string s="*";
   string space;
   vector<string> str;
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
   s="*";
   while (count)
   {
        for (int j = 0; j < count-1; j++)
        {
            space+=" ";
        }
        str.push_back(space+s);
        s+="**";
        --count;
        space="";
   }   
   for (int i = str.size()-1; i >=0; --i)
   {
        cout << str[i] << endl;
   } 
    return 0;
}
