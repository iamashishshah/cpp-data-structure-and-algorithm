#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= n; i++){
    for (int j = n; j > i - 1; j--){
      cout << "* ";
    }
    for (int j = 1; j < i; j++){
      cout << "  ";
    }
    for (int j = 1; j < i; j++){
      cout << "  ";
    }
    for (int j = n; j > i - 1; j--){
        cout << "* ";
      }
      cout << endl;
    }
    for (int i = 0; i < n; i++){
        // number
        for (int j = 0; j < i + 1; j++){
          cout << "* ";
        }
        // space
        for (int j = 0; j < n - i - 1; j++){
          cout << "  ";
        }
        //space
        for (int j = 0; j < n - i - 1; j++){
          cout << "  ";
        }
        //number
        for (int j = 0; j < i + 1; j++) {
          cout << "* ";
        }
        cout << endl;
    }
        
}