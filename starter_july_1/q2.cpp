#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    float x,y;
	    cin >> x >> y;
	    float r = 6 - (x+y);
	    if(r <= 0){
	        cout << 0 << endl;
	    }
	    else{
	        cout << fixed << setprecision(6) << (r/6) << endl;
	    }
	    
	}
	return 0;
}
