// Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have. 
// If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.

#include<iostream>

using namespace std;

int main(){
	int numberOfTeaBags;
    cout<< "Enter the number of tea bags: ";
    cin>> numberOfTeaBags;
    if(numberOfTeaBags < 20)
        numberOfTeaBags += 10;
    cout<< "Number of tea bags are: "<< numberOfTeaBags<<endl;
	return 0;
}
