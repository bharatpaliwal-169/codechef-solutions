  #include <iostream>
  using namespace std;

  int main() {
      int t; cin >> t;
      int x1,x2,y1,y2,z1,z2;
      while(t--){
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        if(x2 >= x1 && y2 >= y1 && z2 <= z1 ){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
            
      }
    return 0;
  }
