#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
  int t;cin >> t;
  ll N,M;
  while (t--)
  {
    cin >> N >> M;
    ll destination[N + 1],passanger[M + 1];
    ll result[M] = {0};

    //input
    for(ll i = 1; i <= N; i++)
    {
      cin >> destination[i];
    }
    for(ll i = 1; i <= M; i++)
    {
      cin >> passanger[i];
    }
    //process
    for (ll l = 1; l <=  M; l++){
      if(destination[passanger[l]] != 0){
        result[l] = 0;
      }

      if(destination[passanger[l]] == 0){
        ll i = passanger[l],j = passanger[l];
        
        if(destination[i] == destination[N] || destination[i] == destination[1]){
          result[l] = 0;
          break;
        }
        while (i--,j++)
        {
          if(destination[i] == 1)
          {
            result[l] = abs(passanger[l] - i);
            break;
          }
          else if(destination[j] == 2)
          {
            result[l] = abs(passanger[l] - j);
            break;
          }
          else{
            if(i == 0 || j == N){
              result[l] = -1;
              break;
            }
          }
        }
      
      }  
    }

    for(int i =1 ; i <= M; i++){
      cout << result[i] << " ";
    }
    cout << endl;
  }
	return 0;
}