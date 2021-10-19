#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7


int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t;cin >> t;
  while (t--){
    ll n,k;
    cin >> n >> k;
    vector<ll>a;
    ll maxx = INT_MIN;
    for(int i=0;i<n;i++){
        ll x;cin >> x;
        a.push_back(x);
        maxx = max(maxx,a[i]);
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll check = i+k-1;
        if(check < n && a[check] == maxx){
            ans += (n-check);
        }
    }
    
    cout << ans << endl;
  }

  return 0;
}