#include <bits/stdc++.h> 
using namespace std; 
#define L long long int
L modulo(L a, L b, L n){
    L x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n; // multiplying with base
        }
        y = (y*y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}


int main() 
{
  L t;
  cin >> t;
  L mod = 1000000007;
  while (t--)
  {
    L a,b;
    cin >> a >> b;
    L c = modulo(2,a,mod)-1; // 0 ≤ A1,A2,…,AN ≤ 2M−1
    L res = modulo(c,b,mod);
    cout << res << endl;
  }
  return 0; 
} 
