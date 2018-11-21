#include <iostream>

using namespace std;
int main() {
    int cases;
    int revenuead;
    int noad;
    int cost;
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> noad;
        cin >> revenuead;
        cin >> cost;
        
    
      if ((revenuead - cost) > noad){
        cout << "advertise\n";
      }
      
      else if ((revenuead - cost) < noad){
        cout << "do not advertise\n";
      }
      
      else{
        cout << "does not matter\n";
      }
    
    }
}