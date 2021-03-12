#include<bits/stdc++.h>
using namespace std;
#define L long long int
int main()
{
  int t;
  L C,d;
  cin >> t;
  while (t--)
  {
    cin >> C;
    d = (log2(C));

    // cout << d << endl;

    L b = pow(2,d) - 1;
    L a = C ^ b;

    L max_product = a*b;
  
    cout << max_product << endl;
  }
}