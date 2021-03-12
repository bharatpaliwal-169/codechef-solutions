#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin >> t;
  while (t--) {

    int n,m;
    cin >> n >> m;
    int a[n] , b[m];
    for(int i=0; i<n; i++) {
      cin >> a[i];
    }
    for(int i=0; i<m; i++) {
      cin>> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
//data input done ....    
    int count = 0;


    map<int , int> g1;
    map<int , int> g2;


    for(int i=0; i<n; i++){
      g1.insert(pair<int,int>(i,a[i]) );
    }
    for(int i=0; i<m; i++){
      g2.insert(pair<int,int>(i,b[i]));
    }
    int sum1=0,sum2=0;
    
    map<int, int>::iterator itr,itr1,temp;


    //sum of jack and john
    for (itr = g1.begin(); itr != g1.end(); ++itr) { 
        sum1 += itr->second;
    } 
    for (itr = g2.begin(); itr != g2.end(); ++itr) { 
        sum2 += itr->second;
    }

    if(sum1 > sum2){
      cout << count << endl;
      break;
    }
    
    
    
  }
}