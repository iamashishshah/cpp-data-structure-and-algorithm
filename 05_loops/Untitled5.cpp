// Challenge : Create a program that asks the user if they want more tea.Keep asking them until they type "no"(case -insensitive), using a do - while loop.

#include<iostream>
using namespace std;

int main()
{
    string moreTea;
    do{
        cout << "Do you want more tea? ";
        getline(cin, moreTea);
    } while (moreTea == "no");
    cout << "Thank you for visiting us."<<endl;
    return 0;
}
