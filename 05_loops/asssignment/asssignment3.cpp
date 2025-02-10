// Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.

#include<iostream>
using namespace std;

int main()
{
    int teaCups = 5;
    for (int i = 0; i < teaCups; i++)
    {
        cout << "Instructions "<<endl;
    }
    cout << "All cups of tea made."<<endl;
    
    return 0;
}
