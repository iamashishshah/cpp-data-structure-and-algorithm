#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = n; i > 0; i--){
    for(int j = 1; j <= n - i + 1; j++){
      cout << (char)(64 + i + j - 1) << " ";
    }
    
    cout << endl;
  } return 0;
}