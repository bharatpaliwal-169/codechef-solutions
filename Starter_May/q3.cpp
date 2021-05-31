#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n , m , k ,x;
    cin >> n >> m >> k;
    int freq[n+m+1] = {0};
    for(int i=0;i<k;i++)
    {
      cin >> x;
      freq[x]++;
    }
    vector<int> ans;
        for(int i = 1; i <= n; i++){
            if(freq[i] > 1){
              ans.push_back(i);
            }
        }
        int sz = ans.size();
        cout << sz;
        for(int i = 0; i < sz; i++){
            cout << " " << ans[i];
        }
        cout << endl;
  }
}