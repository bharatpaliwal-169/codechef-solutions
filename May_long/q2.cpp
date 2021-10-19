#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

	int t;cin >> t;
	ll n,x,k;

	while (t--) 
	{
		cin >> n >> x >> k;
		ll fwd = x % k;
		ll back = ((n+1) - x) % k;
		if(fwd == 0 || back == 0){
			cout << "Yes" << "\n";
		}
		else{
			cout << "No" << "\n";
		}
	}	
	return 0;
}