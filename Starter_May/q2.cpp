#include <iostream>
using namespace std;

void test(int K)
{
    string s,c="YES";
    int l;
    for(int i=0;i<K;i++)
    {
        cin>>s;
        if(s[0]>='a' && s[0]<='m')
        {
            for(int j=1;j<s.length();j++)
            {
                if(s[j]<'a' || s[j]>'m') {
                  c="NO";
                  exit;
                }
            }
        }
        else if(s[0]>='N' && s[0]<='Z')
        {
            for(int j=1;j<s.length();j++)
            {
                if(s[j]<'N' || s[j]>'Z') {
                  c="NO";
                  exit;
                }
            }
        }
        else c="NO";
    }
    cout<<c<<"\n";
}

int main()
{
    int T,K;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>K;
        test(K);
    }
    return 0;
}
