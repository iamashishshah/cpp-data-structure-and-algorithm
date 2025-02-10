// Challenge : Write a program that keeps serving tea until the user says they've had enough (input ' stop '). 
// Use a break statement to exit the loop when the user types ' stop'.

#include<iostream>
using namespace std;

int main()
{
    while (true)
    {
        string response;
        cout << "Do you want more tea?  ";
        getline(cin, response);
        if(response == "stop" || response == "Stop")
            break;
    }
    return 0;
}
