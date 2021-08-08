#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;cin >> t;
  int d,x,y,z,ans=0;
  while(t--)
  {
      cin >> d >> x >> y >> z;
      ans = max( (x*7) , (y*d) + (z*(7-d)) );
      cout << ans << endl;
  }
return 0;
}
