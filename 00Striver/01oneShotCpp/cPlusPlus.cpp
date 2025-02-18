#include <iostream>
#include <string>
#include <vector>

using namespace std;
void increament(int *);
void add(int &);

int main() {
  // int x, y, z;
  // cin >> x >> y >> z;
  // cout << x << y <<  z << endl;
  int a = 34;
  int b = a;
  int *num = &a;
  cout << num << endl;
  // good
  // string str;
  // getline(cin, str);
  // cout << "String value: " << str.length() << endl;

  // int matrixOne[2][3];
  // cout << "Enter first matrix: " << endl;
  // for (int row = 0; row < 2; row++){
  //     for (int  col = 0; col < 3; col++){
  //         cin >> matrixOne[row][col];
  //     }

  // }
  // int matrixTwo[2][3];
  // cout << "Enter second matrix: " << endl;
  // for (int row = 0; row < 2; row++){
  //     for (int  col = 0; col < 3; col++){
  //         cin >> matrixTwo[row][col];
  //     }

  // }
  // // printing 2D array
  // for (int row = 0; row < 2; row++){
  //     for (int  col = 0; col < 3; col++){
  //         cout << matrixOne[row][col] * matrixTwo[row][col] << "\t";
  //     }
  //     cout << endl;
  // }

  int number = 10;
  // i can directly pass reference or else I can pass value but take as ref
  increament(&number);
  cout << "Value in increament fn: " << number << endl;

  add(number);
  cout << "Value added from add fn: " << number << endl;

  cout << endl;
  return 0;
}

void add(int &number) { number += 12; }

void increament(int *num) {
  ++*num;
  cout << *num << endl;
}

void add(int &number) { number += 12; }