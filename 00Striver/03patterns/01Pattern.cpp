#include <iostream>
#include <vector>

using namespace std;

int main() {
  // way 1:
  for (int i = 0; i < 5; i++){
    cout << "* * * * * " << endl;
  } 

  // way 2:

  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++)
    {
      cout << "*  ";
    }
    cout << endl;
  } 
  cout << endl;
  return 0;

}