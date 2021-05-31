#include <bits/stdc++.h> 
using namespace std; 
#define ull unsigned long long int
int decimalToBinary(int N)
{
    ull B_Number = 0;
    ull cnt = 0;
    while (N != 0) {
        ull rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
    return B_Number;
}

bool isSubSequence(string str1 , string str2)
{
  ull m = str1.length();
  ull n = str2.length();
  ull j = 0;
  for (ull i = 0; i < n && j < m; i++)
      if (str1[j] == str2[i])
          j++;
  return (j == m);
}

int main() 
{
  int t;
  cin >> t;
  
  while(t--)
  {
    string input;
    cin >> input;
    int x = -1;
    while(true)
    {
      x++;
      cout << x << endl;
      ull binary_x = decimalToBinary(x);
      cout << binary_x << endl;
      string sub_x = to_string(binary_x);
      
      // cout << sub_x << endl;

      if(!(isSubSequence(sub_x , input )) ){
        cout << sub_x << endl;
        break;
      }
    }
  }
  return 0; 
} 
