#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    int x,a,b,sol=0;
    while(t--)
    {
        cin >> x >> a >> b;
        sol = a + (100 -x) * b;
        sol *= 10;
        cout << sol << endl;
    }

	return 0;
}
