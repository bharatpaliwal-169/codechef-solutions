#include <bits/stdc++.h> 
using namespace std; 
#define L long long int

int main() 
{
  int t;
  cin >> t;

  L n,m,k;
  L k_count = 0;
  while(t--)
  {
    cin >> n >> m >> k;
    L matrix[n+1][m+1];
    for(L i=0; i<=n; i++)
    {
      for(L j=0; j<=m; j++)
      {
        if(i==0||j==0){
          matrix[i][j]=0;
        }
        else
          cin >> matrix[i][j];
      }
    }

    for(L i=0; i<=n; i++)
    {
      L pre = 0;
      for(L j=0; j<=m; j++)
      {  
        matrix[i][j] += pre;
        pre = matrix[i][j];
      }
    }
    for(L j=0; j<=m; j++)
    {
      L pre = 0;
      for(L i=0; i<=n; i++)
      {  
        matrix[i][j] += pre;
        pre = matrix[i][j];
      }
    }
    L z=0;
    if(n<m)
    {
      z = n;
    }
    else{
      z=m;
    }

    for(L len=1;len<=z; len++){
      for(L i=len;i<=n;i++){
        for(L j=len; j<=m; j++){
          if((matrix[i][j] + matrix[i-len][j-len] -
              matrix[i][j-len] - matrix[i-len][j]) / (len*len) >= k){
                k_count++;
              }
        }
      }
    }
    cout << k_count << endl;
  }
  return 0; 
} 
