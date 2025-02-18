#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  if(n == 1){
    cout << "*" << endl;
  }else{
    for (int i = 1; i <= n; i++) {
        cout << "* ";
      }
      cout << endl;
      for (int i = 2; i < n; i++) {
        // start
        cout << "* ";
        // space
        for (int j = 1; j <= n - 2; j++) {
          cout << "  ";
        }
        // star
        cout << "* ";
        cout << endl;
      }
    
      for (int i = 1; i <= n; i++) {
        cout << "* ";
      }
      cout << endl;
    
  }
  return 0;
}