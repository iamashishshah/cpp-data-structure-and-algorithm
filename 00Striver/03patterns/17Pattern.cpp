#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n - i; j++){
      cout << " ";
    }
    for (int j = 1; j <= i - 1; j++){
      cout << (char)(64 + j);
    }
    cout << (char)(64 + i);

    for (int j = i - 1; j > 0; j--){
      cout << char(64 + j);
    } 
    cout << endl;
  }
  
  
  return 0;
}