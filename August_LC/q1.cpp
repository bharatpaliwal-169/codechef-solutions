#include <iostream>
using namespace std;

int main() {
// your code goes here
int t;cin >> t;
int g1,g2,s1,s2,b1,b2;
while(t--){
    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
    int sum1 = g1+s1+b1;
    int sum2 = g2+s2+b2;
    if(sum1 > sum2){
        cout << "1" << endl;
    }
    else{
        cout << "2" << endl;
    }
}
return 0;
}
