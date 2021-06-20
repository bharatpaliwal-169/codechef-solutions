#include<iostream>
using namespace std ;

int main () 
{
    long int t ;
    cin >> t ;
    
    while (t--)
    {
        long int D, d, P, Q ;
        cin >> D >> d >> P >> Q ;
        
        long int i = D/d;
        
        long int ans =  ( i*P + ( i*(i-1)/2 * Q ) ) * d   +  (P + (i)*Q) * (D-i*d); 
        
        cout << ans << endl ;
    }   
    return 0 ;
}