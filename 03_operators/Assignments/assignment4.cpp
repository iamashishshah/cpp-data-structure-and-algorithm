//Challenge: Create a program that checks if a user is eligible for a tea subscription discount. 
//The discount applies if the user is either a student or has purchased more than 15 cups. 
//Ask the user to input their status (student or not) and their cup count.

#include<iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
	string professionalStatus;
	cout << "Enter \"student\" if you're a student or else enter \"others\": ";
	getline(cin, professionalStatus);
	cout<<"Enter the number of cups: ";
	int numberOfCups;
	cin>>numberOfCups;
	
	//give 6% discount
	if(professionalStatus == "student" || numberOfCups > 15){
		cout<<"You're eligible for discount.\n";
	}else{
		cout<<"Sorry! you're not eligible for discount."<<endl;
	}
	return 0;
}
