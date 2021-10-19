#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin >> t;
    while(t--){
        int x,m,d;
        cin >> x >> m >> d;
        int a = x*m;
        int b = x+d;
        int res = min(a, b);
        cout << res << endl;
    }
	return 0;
}