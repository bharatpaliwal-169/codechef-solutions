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
    d = ceil(log2(C));

    L n = pow(2,d);
    L  b,max_product = 0 ,product = 0;

    
    for(L i=1;i<=n;i++)
    {
      b = C ^ i;
      
      product = b * i;
      if (product > max_product)
      {
        cout << b << i <<endl;
        max_product = product;
      }
    }
    cout << max_product << endl;
  }
}