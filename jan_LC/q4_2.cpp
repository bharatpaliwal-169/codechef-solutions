#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin >> t ;
	int n,k,flag = 0;
	
	while(t--){
      cin >> n >> k;
      int a[n];
      for(int i=0;i<n;i++){
          cin >> a[i];
      }
      sort(a,a+n);
      reverse(a,a+n);
      int tot = accumulate(a,a+n,0);
      if(tot < k*2){
        flag = -1; //nahi bana
      }

      int count=0,temp = 0,check=0,start=0;
      int tower = 0; // tower = 2;
      
      

  }
  return 0;
}