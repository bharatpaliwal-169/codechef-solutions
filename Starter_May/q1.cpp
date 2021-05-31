#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin >> t;
    while(t--){
        int x,m,d;
        cin >> x >> m >> d;
        int res = min(x*m , x+d);
        cout << res << endl;
    }
	return 0;
}