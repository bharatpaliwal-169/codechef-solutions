#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7


int countStep(vector<int>& a){
    int ans  = 0 , n = a.size();
    int start = a[0];
    for(int i=1;i<a.size();i++){
        if(a[i] > start) return -1;
    }
    
    stack<int> s;
    
    for(int i=1;i<n;i++){
        while( s.size()!=0 and s.top() <= a[i]){
            s.pop();
        }
        
        s.push(a[i]);
    }
        
    while(!s.empty()){
        ans++;
        s.pop();
    }
    return ans;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t;cin >> t;
  while (t--){
      int n; cin >> n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
          cin >> a[i];
      }
      
      cout << countStep(a) << endl;
    
  }

  return 0;
}
