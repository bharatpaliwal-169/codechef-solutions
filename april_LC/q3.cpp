#include <bits/stdc++.h> 
using namespace std; 

string substrCheck(string mainStr , string sub){
  string str1 = mainStr;
  string str2 = sub;
  
  long long int pos = 0;
  string flag="NO";
  long long int index;
  while((index = str1.find(str2, pos)) != string::npos) {
    pos = index + 1; 
    flag = "YES";
  }
  return flag;
}
string addString(long long int m){
  string mini = "";
  string add = "*";
  for(long long int i = 0; i < m; i++){
    mini.append(add);
  }
  return mini;
}

int main() 
{
  long long int t;
  cin >> t;
  long long int n,m;
  while(t--){
    cin >> n >> m;
    string inputStr;
    cin >> inputStr;

    string subString = addString(m);
    string result = substrCheck(inputStr,subString); 
    cout << result << endl;
  }

	return 0; 
} 
