#include <bits/stdc++.h>
using namespace std;
int main()
{

  int t;cin >> t;
  int r1,r2,r3,w1,w2,w3;
  while(t--){
      cin >> r1 >> r2 >> r3;
      cin >> w1 >> w2 >> w3;
      
      int s1=0,s2=0;
      if(r1 > w1){
          s1++;
      }
      else{
          s2++;
      }
      if(r2 > w2){
          s1++;
      }
      else{
          s2++;
      }
      if(r3 > w3){
          s1++;
      }
      else{
          s2++;
      }
      
      if(s1 > s2){
          cout << "A" << endl;
      }
      else{
          cout << "B" << endl;
      }
    
  }
  return 0;
}
