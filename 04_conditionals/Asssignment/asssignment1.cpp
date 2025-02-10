// Challenge : Write a program that checks if the user wants to order Green Tea.
// If the user types "Green Tea," the program should confirm their order.

#include<iostream>
using namespace std;

int main()
{
    cout<< "Which tea do you want to order: "<<endl;
    string teaType;
    getline(cin, teaType);
    if(teaType == "Green tea")
        cout<< "Your order is confirmed. Thank you!"<<endl;
    else
        cout<< "Sorry! We can't process the order."<<endl;
    return 0;
}
