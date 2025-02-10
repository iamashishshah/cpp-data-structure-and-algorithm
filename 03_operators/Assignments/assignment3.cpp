//Challenge: A tea shop offers a loyalty program. 
//Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge.
// Write a program to display the badge they will receive based on the number of cups they buy.
#include<iostream>

using namespace std;

int main(){
	int numberOfCups;
	cout<<"Enter the number of cups: ";
	cin>>numberOfCups;
	if(numberOfCups < 10){
		cout<<"Bronze medal";
	}else if(numberOfCups > 20){
		cout<<"Gold medal";
	}else if(numberOfCups <= 20 && numberOfCups >= 10){
		cout<<"Silver medal";
	}
	return 0;
}
