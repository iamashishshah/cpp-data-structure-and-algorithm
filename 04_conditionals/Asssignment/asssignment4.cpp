// Challenge : Write a program that lets the user select a tea type from a menu.Use a switch statement to display the price based on the selected tea : 
// Green Tea : $2
// Black Tea : $3
// Oolong Tea : $4

#include<iostream>
using namespace std;

int main()
{
    cout<< "Press number to select the tea: "<<endl;
    cout<< "1. Green tea\n2. Black tea \n3. Oolong tea"<<endl;
    int teaSelection;
    cin>>teaSelection;

    switch (teaSelection)
    {
    case 1:
        cout<<"$2"<<endl;
        break;
    
    case 2:
        cout<<"$3"<<endl;
        break;
    
    case 3:
        cout<<"$4"<<endl;
        break;
    
    default:
        cout<<"Invalid option is pressed. Try again"<<endl;
        break;
    }
    return 0;
}
