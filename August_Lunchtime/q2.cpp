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
      int n;cin >> n;
      
      if(n%4 == 0 || (n+1)%4 == 0){
          cout << n << endl;
      }
      else{
          cout << n-1 << endl;
      }
      
    
  }

  return 0;
}
