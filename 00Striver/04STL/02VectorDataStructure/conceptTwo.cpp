#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> one(4);
  // cout << "enter the vector data: ";
  for (int i = 0; i < one.size(); i++) {
    // cin >> one[i];
  }
  // cout << "Vector data output: " << endl;
  for (int i = 0; i < one.size(); i++) {
    // cout << one[i] << "\t";
  }

  /* Iterator concept */
  // vector<int> two = {5, 32, 9, 21};
  // vector<int>::iterator iteStart = two.begin();
  // cout << *(iteStart+2) << endl;
  // vector<int>::iterator iteEnd = two.end();
  // cout << *(--iteEnd) << endl;
  // vector<int>::reverse_iterator iterReverseBegin = two.rbegin();
  // cout << *(++iterReverseBegin) << endl;
  // vector<int>::reverse_iterator iterReverseEnd = two.rend();
  // cout << *(iterReverseEnd-2) << endl;
  // auto it = two.begin();
  // cout << *(it+2) << endl;

  // some methods of vector data structure
  vector<int> three = {4, 32, 6, 77, 23};
  cout << three.back() << endl;
  cout << three.front() << endl;
  
  // iteration using iterator
  for (vector<int>::iterator it = three.begin(); it != three.end(); it++) {
    cout << *(it) << " \t";
  }
  cout << endl;
  // or
  for (auto it = three.begin(); it != three.end(); it++) {
    cout << *(it) << "\t";
  }
  cout << endl;
  //  or for each loop
  for (auto value : three) {
    cout << (value) << "\t";
  }
  cout << endl;
  // or using normal for loop
  for (int i = 0; i < three.size(); i++) {
    cout << three[i] << "\t";
  }
  cout << endl;

  // deleting the data or erase
  // auto some = three.erase(three.begin());
  // cout << *(some+2) << endl; // after deleting the value, getting address of
  // begin data
  // three.erase(--three.end());  // three.erase(address to which you want to
  //   delete value)
  // can I erase all data using erase() function
  for (auto it = three.begin(); it != three.end();) {
    three.erase(it);
  }
  cout << "Value after erasing all the data: " << three.size() << endl;
  for (int i = 0; i < three.size(); i++) {
    cout << three[i] << "\t";
  }
  cout << endl;

  cout << endl;
  // methods on iterator: .begin() .end() .rbegin() .rend()
  // methods on vector: .back() .push_back() .emplace_back()
  // erase fn:
  cout << endl;
  return 0;
}