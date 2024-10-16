#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0)
#define d double
using namespace std;

int main() {
  	fast;
  	int k,s,cnt=0;
  	cin >> k >> s;
  	for (int i = 0; i <=k; ++i)
  	{
  		for (int j = 0; j <=k; ++j)
  		{
  			int p=s-i-j;
  			if(p>=0 && p<=k) cnt++;
  		}
  	}
  	cout << cnt << "\n";
  	return 0;
}