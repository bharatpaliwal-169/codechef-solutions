#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,a,b;
        cin >> a >> b >> x;
        cout << (b-a)/x << endl;
    }
	return 0;
}
