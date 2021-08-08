#include <bits/stdc++.h>
using namespace std;



int main()
{

  int t;cin >> t;
  
  while(t--){
      int n = 3,sum1=0,sum2=0;
      int arr1[n],arr2[n];
 
      for(int i=0;i<n;i++){
        cin >> arr1[i];
        sum1 += arr1[i];
      } 
      
      for(int i=0;i<n;i++){
        cin >> arr2[i];
        sum2 += arr2[i];
      } 
      string res = (sum1 > sum2) ? "A" : "B";
      cout << res << "\n";
  }
  
  
  return 0;
}
