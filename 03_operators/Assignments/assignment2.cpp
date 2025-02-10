//Challenge: Write a program that allows a user to input the number of tea bags they have. 
//Assign additional bags to them based on certain conditions 
//(e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.

#include<iostream>

using namespace std;

int main(){
	int numberOfBags;
	cout<<"Enter the number of bags: ";
	cin>>numberOfBags;
	if(numberOfBags < 10){
		int totalBags = numberOfBags + 5;
		cout<<"Total bags are now: "<<totalBags<<endl;
	}else{
		cout<<"Total bags are : "<<numberOfBags<<endl;
	}
	return 0;
}
