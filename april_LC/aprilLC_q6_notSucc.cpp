#include <bits/stdc++.h> 
using namespace std; 
#define L long long int
#define MAX 32
string decToBinary(L n)
{
    L binaryNum[MAX];  
    L i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    L len = sizeof(binaryNum)/sizeof(binaryNum[0]);
    reverse(binaryNum,binaryNum + len);

    std::ostringstream os;
    for (int i: binaryNum) 
    {
        os << i;
    }

    std::string str(os.str());

    return str;
}

bool isSubSequence(char str1[], char str2[], int m, int n)
{
    int j = 0; // For index of str1 (or subsequence
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}



int main() 
{
  L t;
  cin >> t;
  while(t--)
  {
    string inputStr;
    cin >> inputStr;
    while (true){
      L i = -1;
      string check_string = decToBinary(i++);
      L m = strlen(inputStr);
      L n = strlen(check_string);
      if(!isSubSequence (inputStr,check_string,m,n) )
      {
        cout << check_string << endl;
        break;
      }
    }
  }
  return 0; 
} 
