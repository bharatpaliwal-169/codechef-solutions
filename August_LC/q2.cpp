#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int a1,a2,a3,a4,ans=0;
	while(t--){
    cin >> a1 >> a2 >> a3 >> a4;
    map<int,int> m;
    int arr[] = {a1,a2,a3,a4};
    for(int i=0;i<4;i++){
        m[arr[i]]++;
    }
    int c=0;
    if(m.size() > 2) ans = 2;
    if(m.size() == 2 ){
      for(auto i : m){
        if(i.second > 2){
          ans = 1;
          break;
        }
        else ans = 2;
      }
    }
    if(m.size() == 1) ans = 0;
    
    cout << ans  << endl;
	}
	return 0;
}
