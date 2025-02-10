// Challenge : Write a program that skips brewing green tea if the user dislikes it.Use a continue statement to skip over green tea but brew other types of tea in a list

#include<iostream>
using namespace std;

int main()
{
    string teaType;
    do
    {
        cout << "Enter your favorite tea to brew: (stop to not brew)  ";
        getline(cin, teaType);
        if(teaType == "Grean tea" || teaType == "green tea")
            continue;
        if(teaType != "stop")
        	cout << "Tea brewing..."<<endl;
    } while (teaType != "stop");
    
    return 0;
}
