#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;cin >> t;
  while (t--) {

    int n,m;
    cin >> n >> m;
    long long int a[n] , b[m];
    for(int i=0; i<n; i++) {
      cin >> a[i];
    }
    for(int i=0; i<m; i++) {
      cin>> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
  //data input done ....
    long long int sum1 = accumulate(a,a+n,0);
    long long int sum2 = accumulate(b,b+m,0);
    long long int count = 0;
    if(sum1 > sum2){
      //count = 0;
      cout<<count<<endl;
      break;
    }
    if(n==m){
      for(int i=0; i<n; i++) {
        if(a[i]==b[i])
        {
          count = -1;
        }
        cout << count<<endl;
        break;
      }
    }

    while(sum1 <= sum2){
      long long int temp = a[0];
      a[0] = b[m-1];
      b[m-1] = temp;
      sort(a,a+n);
      sort(b,b+m);
      int c1 = accumulate(a,a+n,0);
      int c2 = accumulate(b,b+m,0);
      count++;
      if(c1 > c2){
        cout << count << endl;
        break;
      }
    }
    

    
  }//while test
  return 0;
}