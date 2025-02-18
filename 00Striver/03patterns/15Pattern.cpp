#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = n; i > 0; i--) {
    for (int j = 1; j <= i; j++){
      cout << (char)(64 + j) << " ";
    }
    cout << endl;
  }
  return 0;
}