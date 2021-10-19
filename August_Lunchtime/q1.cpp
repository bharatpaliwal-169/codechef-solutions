#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7


int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  
  int t;cin >> t;
  while(t--){
      int a,b,a1,a2,b1,b2;
      int flag = 0;
      cin >> a >> b >> a1 >> b1 >> a2 >> b2;
      if(a1 == a and b1 == b || a1 == b and b1 == a) flag = 1;
      else if(a2 == a and b2 == b || a2 == b and b2 == a) flag = 2;
      else flag = 0;
      if(flag ==1)cout << 1 << endl;
      else if(flag == 2) cout << 2 << endl;
      else  cout << 0 << endl;
  }

  return 0;
}
