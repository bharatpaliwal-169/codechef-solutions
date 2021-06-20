  #include <bits/stdc++.h>
  using namespace std;
  int sum(int arr[],int n){
      int s =0 ;
      for(int i=0;i<n;i++){
          s += arr[i];
      }
      return s;
  }
  int main() {
    int t;cin >> t;
    int n;
    
    while(t--){
        cin >> n;
        int arr[n],count = 0;
        int check=0;count=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            count++;
            if(arr[i] >=1 && arr[i] <=7){
                check++;
            }
            if(check==7){
                cout << count << endl;
                break;
            }
        }
    }
    return 0;
  }