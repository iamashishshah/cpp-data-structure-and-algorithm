// Challenge : A tea shop offers discounts based on the number of tea cups ordered.Write a program that checks the number of cups ordered and applies a discount : 
// 3. More than 20 cups : 20 % discount
// 2. Between 10 and 20 cups : 10 % discount
// 1. Less than 10 cups : No discount

#include<iostream>
using namespace std;

int main()
{
    int numberOfTeaCups;
    cout<< "Enter the number of tea cups: ";
    cin>>numberOfTeaCups;

    if(numberOfTeaCups < 10)
        cout<< "Sorry! No discount for you."<<endl;
    else if(numberOfTeaCups >= 10 && numberOfTeaCups < 20)
            cout<< "10\% discount."<<endl;
    else
        cout<< "20\% discount."<<endl;
    return 0;
}
