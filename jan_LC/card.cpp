#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin >> t;
  int n,x,y;
  while(t--){
    cin >> n >> x >> y;
    int a[n];
    for(int i=0; i<n; i++){
      cin >> a[i];
    }
    
    int count_swap = 0,temp=0;
    for(int i=0; i<n-1; i++) 
    {
      temp += a[i];
    }
    if(temp >= x && temp <= y){
      count_swap=0;
    }
    if(temp < x || temp > y){
      count_swap=-1;
    }
    int i= n;
    while( i>0 ){
      swap(a[i-1],a[i-2]);
      count_swap++;
      


    }

  }




  return 0;
}