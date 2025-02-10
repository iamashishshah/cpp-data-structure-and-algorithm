//Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded 
//new price using explicit casting..
//Hint: Use both float and int types, and demonstrate type casting.

#include<iostream>

using namespace std;

int main(){
	cout<<"Enter the base price of the tea: \n";
    int teaPrice;
    cin>>teaPrice;
    float newPrice = (float) (teaPrice + teaPrice * 0.52);
    cout<<"New price of the tea is : "<<newPrice;
    
}
