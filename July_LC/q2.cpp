#include <iostream>
using namespace std;

int solve(int g,int c){
    int h = 0;
    h = (c*c) / (2*g) ;
    return h;
}

int main() {
	int t;cin >> t;
	int g,c;
	while(t--){
    cin >> g >> c;
    cout << solve(g,c) << endl;
	}
	return 0;
}
