#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll modularExponentiation(ll x,ll n,ll M)  
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 == 1)
            result=(result * x)%M;  
        x=(x*x)%M;  
        n=n/2; 
    }
    cout <<"exp"<< result << endl;
    return result;
}
ll inverseC(ll C,ll M){
    cout <<"inv ->"<< modularExponentiation(C,M-2,M) << endl;
    return modularExponentiation(C,M-2,M);
}

int main()
{
	ll A,B,C,M;
    cin >> A >> B  >> C >> M;
    ll result = ( modularExponentiation(A,B,M)%M * inverseC(C,M)%M ) % M;
    cout << result << endl;
}