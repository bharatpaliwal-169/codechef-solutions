#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    string str;
    while(t--){
        cin >> str;
        bool flag = true;
        int n = str.size();
        if(n <= 3) flag = false;
        else if(str[0] != '<' || str[1] != '/'){
            flag = false;
        }
        else if(str[n-1] != '>')
            flag = false;
        
        else{
            for(int i=2;i<n-1;i++){
                if( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) ){
                    flag = false;
                }
            }
        }
        
        string ans = (flag) ? "Success" : "Error";
        cout << ans << endl;
        
    }
	return 0;
}
