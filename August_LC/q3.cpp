#include <bits/stdc++.h> 
using namespace std; 
int main() {
  int t; 
  cin >> t; 
  while(t--) {
    int n, p, k;
    cin >> n >> p >> k; 
    int ans = 0;
    
    int dist_id = p%k;
    dist_id--; 
    
    int sub = (((n-1)/k)*k);
    sub = n-1-sub; 
    
    if(dist_id > sub) {
      ans += (sub+1)*((n-1)/k+1) + (dist_id-sub)*((n-1)/k);
    } else {
      ans += ((n-1)/k+1)*(dist_id+1); 
    }
    
    for(int i = dist_id+1; i <= n-1; i+=k) {
      ans++; 
      if(i == p) {
        cout << ans << endl;
        break; 
      }
    }
  }
  return 0;
}