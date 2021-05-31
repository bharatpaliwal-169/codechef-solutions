// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;cin >> t;
// 	ll n,x,k;
// 	while (t--) 
// 	{
// 		cin >> n >> x >> k;
// 		ll arr[n+2];
// 		for (int i = 0; i <= n+1; i++)
// 		{
// 			arr[i] = i;
// 		}
// 		// for (int i = 0; i <= n+1; i++)
// 		// {
// 		// 	cout << arr[i] << "\n";
// 		// }
// 		int flag = 0,prev = 0;
// 		for (int i = 0; i <= n+1; i+=k)
// 		{
// 			if(arr[i] == x){
// 				flag = 1;
// 			}
// 		}
// 		prev = flag;
// 		for (int i = n+1; i >= 0; i-=k)
// 		{
// 			if(arr[i] == x){
// 				flag = 1;
// 			}
// 		}
// 		if(prev == 1 || flag == 1 )
// 		{
// 			cout << "YES" << "\n";
// 		}
// 		else
// 			cout << "NO" << "\n";
// 	}
	
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
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