// Challenge : Write a program that checks if a tea shop is open.If the current hour(input by the user) is between 8 AM and 6 PM, the shop is open;
// otherwise, it's closed.

#include<iostream>
using namespace std;

int main()
{
    cout<< "Enter the current hour(0-23): ";
    float currentHours;
    cin>>currentHours;
    if(currentHours >= 8 && currentHours <= 18)
        cout << "Shop is open." << endl;
    else    cout<< "Shop is closed."<<endl;
    return 0;
}

