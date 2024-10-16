#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0)
#define d double
using namespace std;
bool isPrime(int num){
	for (int i = 2; i*i <=num; ++i)
	{
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main() {
  	fast;
  	int n;
  	cin >> n;
  	if(n<6){
  		cout << 0 << "\n";
  		return 0;
  	}
  	vector<int> primes;
  	vector<int> ap;
  	for(int i=2;i<=n;i++){
  		if(isPrime(i)) primes.push_back(i);
  	}
  	for (int i = 6; i <=n; ++i)
  	{
  		int cnt=0;
  		for(int j=0;j<primes.size();++j){
  			if(i%primes[j]==0) cnt++;
  		}
  		if(cnt==2){
  			ap.push_back(i);
  		}
  	}
  	cout << ap.size() << "\n";
  	return 0;
}