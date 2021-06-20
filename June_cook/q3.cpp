#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
  ll n,q;
  cin >> n >> q;
  ll arr[n];
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr,arr+n);
  
  ll x;
  while(q--){
    cin >> x;
    ll pos = lower_bound(arr,arr+n,x)-arr; //pos of x
    if(pos < n && arr[pos] == x){
      cout << "0" << endl;
    }
    else if (pos%2 == 0){
      cout << "POSITIVE" << endl;
    }
    else{
      cout << "NEGATIVE" << endl;
    }
  }
    
	return 0;
}