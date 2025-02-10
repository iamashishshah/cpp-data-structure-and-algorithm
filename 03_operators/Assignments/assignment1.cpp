//Challenge: Create a program that calculates the total price of tea cups. 
//The user inputs the number of cups they want and the price per cup. 
//The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.

#include<iostream>

using namespace std;

int main(){
	// variables
	int numberOfCups;
	float pricePerCups;
	cout<<"Enter the number of cups: ";
	cin>>numberOfCups;
	cout<<"Enter the price per cups of tea: ";
	cin>>pricePerCups;
	
	// give 5% discount if total price is greater than $100
	float totalPrice = (float) (numberOfCups * pricePerCups);
	if(totalPrice >= 100){
		float payablePrice = (float)(totalPrice - totalPrice * 0.05);
		float discount = totalPrice * 0.05;
		cout<<"Payable amount is "<<payablePrice<<endl;
		cout<<"Discount is "<<discount<<endl;
	}else{
		cout<<"As your payable amount is less than 100, so payable amount is "<<totalPrice<<endl;
	}
	return 0;
}
