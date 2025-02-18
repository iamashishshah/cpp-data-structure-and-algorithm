#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  for (int i = 0; i < n; i++){
    // number
    for (int j = 0; j < i + 1; j++){
      cout << j + 1;
    }
    // space
    for (int j = 0; j < n - i - 1; j++){
      cout << " ";
    }
    //space
    for (int j = 0; j < n - i - 1; j++){
      cout << " ";
    }
    //number
    for (int j = 0; j < i + 1; j++) {
      cout << i + 1 - j;
    }
    cout << endl;
}
  return 0;
}